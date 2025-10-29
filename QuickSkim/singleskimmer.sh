#!/bin/bash

# Full path to root file
FULL_PATH=${1}
ROOT_FILE=$(basename ${FULL_PATH})
SAMPLE_TYPE=$(basename ${FULL_PATH%${ROOT_FILE}})

# Change this to wherever you want the skims to go
PATH_TO_SKIMS="/eos/user/j/jnatoli/skims/Wto3pi_2018_cont/"

if [[ ! -d ${PATH_TO_SKIMS} ]]; then
    echo "Skim Directory did not exist... creating"
    mkdir -p ${PATH_TO_SKIMS}
fi

# For compiling 
RCOMP="`root-config --cflags --glibs`"

if [[ ! -f quickSkim.C ]]; then
    echo "Missing File: quickSkim.C"
    echo "Exiting..."
    exit 1
fi

if [[ ! -f skimOver.C ]]; then
    echo "Missing File: skimOver.C"
    echo "Exiting..."
    exit 1
fi

if [[ ! -d "bin" ]]; then
    echo "No directory for binaries... creating"
    mkdir bin
fi

# Names for binary files
SO_OUT="bin/overskim"
QS_OUT="bin/skimquick"

# Make sure this compiles ok...
if $(g++ $RCOMP quickSkim.C -o ${QS_OUT}); then
    # ...and that binary now exits
    if [[ ! -f ${QS_OUT} ]]; then
	echo "Missing binary file: ${QS_OUT}"
	echo "Exiting..."
	exit 1
    fi
else
    echo "Compile error... exiting"
    exit 1
fi


if [[ ! -d ${PATH_TO_SKIMS}/${SAMPLE_TYPE} ]]; then
    echo "Samples directory ${SAMPLE_TYPE} in ${PATH_TO_SKIMS} did not exist... creating"
    mkdir -p ${PATH_TO_SKIMS}/${SAMPLE_TYPE}
fi
    

if [[ ! -f ${FULL_PATH} ]]; then
    echo "File: ${FULL_PATH} does not exist... exiting"
    exit 1
fi	    

echo "Skimming: ${FULL_PATH}"
# create the class associated with the TTree
./${QS_OUT} ${FULL_PATH}
	
# Make sure this compiles ok...
if $(g++ $RCOMP skimOver.C -o ${SO_OUT}); then
    # ...and that binary now exists
    if [[ ! -f ${SO_OUT} ]]; then
	echo "Missing binary file: ${SO_OUT}"
	echo "Exiting..."
	exit 1
    fi
else
    echo "Compile Error... Exiting"
    exit 1
fi
	
# Now skim!
./${SO_OUT}
	
# and move...
echo ">> mv small.root ${PATH_TO_SKIMS}/${SAMPLE_TYPE}/${ROOT_FILE}"
mv small.root ${PATH_TO_SKIMS}/${SAMPLE_TYPE}/${ROOT_FILE}
    
# For reference, quick and dirty way
# for j in Data QCD ST TTV VV VVV W+Jets; do for i in $(ls /Volumes/WineCellar/KState/analysis/Wto3pi_2018/${j}); do ./skimquick /Volumes/WineCellar/KState/analysis/Wto3pi_2018/${j}/${i}; g++ $RCOMP skimOver.C -o overskim; ./overskim; mv small.root /Volumes/WineCellar/KState/skim/Wto3pi_2018/${j}/${i}; done

# For a single sample type
# for i in $(ls /Volumes/WineCellar/KState/analysis/Wto3pi_2018/DY); do ./skimquick /Volumes/WineCellar/KState/analysis/Wto3pi_2018/DY/${i}; g++ $RCOMP skimOver.C -o overskim; ./overskim; mv small.root /Volumes/WineCellar/KState/skim/Wto3pi_2018/DY/${i}; done
