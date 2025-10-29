#!/bin/bash

# This is needed for library stuff ugh
# source ~/root/builddir/bin/thisroot.sh

# Change this to the path to do ntuples
PATH_TO_NTUPLES="/hdfs/store/user/jnatoli/NanoTauAnalysis/analysis/Wto3pi_2018_fromstep1/"
# PATH_TO_NTUPLES="/hdfs/store/user/dmroy/NanoTauAnalysis/analysis/Wto3pi_2022_postEE_fromstep1/"
EXECUTABLE="skimOverWto3pi.C"
LIST="ls" # in case we need to use gfal or something...

# Add a filter functionality
# make this for more than one idiot...
FILTERS_OUT=( "")
FILTER_OUT=""
FILTERS_IN=( "RhoPi" )

if [[ ! -d ${PATH_TO_NTUPLES} ]]; then
    echo "Ntuples directory didn't exist: ${PATH_TO_NTUPLES}"
    echo "exiting..." 
    exit 1
fi

# Change this to wherever you want the skims to go
PATH_TO_SKIMS="/scratch/jnatoli/skimming/Wto3pi_2023_postBPix_fromstep1/"

if [[ ! -d ${PATH_TO_SKIMS} ]]; then
    echo "Skim Directory did not exist... creating"
    mkdir -p ${PATH_TO_SKIMS}
fi

# For compiling 
RCOMP="`root-config --cflags --glibs`"

if [[ ! -f preSkim.C ]]; then
    echo "Missing File: preSkim.C"
    echo "Exiting..."
    exit 1
fi

if [[ ! -f ${EXECUTABLE} ]]; then
    echo "Missing File: "${EXECUTABLE}
    echo "Exiting..."
    exit 1
fi

if [[ ! -d "bin" ]]; then
    echo "No directory for binaries... creating"
    mkdir bin
fi

# Names for binary files
SKIMOVER_OUT="bin/skimover"
PRESKIM_OUT="bin/preskim"

# Make sure this compiles ok...
if $(g++ $RCOMP preSkim.C -o ${PRESKIM_OUT}); then
    # ...and that binary now exits
    if [[ ! -f ${PRESKIM_OUT} ]]; then
	echo "Missing binary file: ${PRESKIM_OUT}"
	echo "Exiting..."
	exit 1
    fi
else
    echo "Compile error... exiting"
    exit 1
fi

for SAMPLE_TYPE in $(${LIST} ${PATH_TO_NTUPLES}); do
    if [[ ! -d ${PATH_TO_SKIMS}/${SAMPLE_TYPE} ]]; then
	echo "Samples directory ${SAMPLE_TYPE} in ${PATH_TO_SKIMS} did not exist... creating"
	mkdir -p ${PATH_TO_SKIMS}/${SAMPLE_TYPE}
    fi
    
    for ROOT_FILE in $(${LIST} ${PATH_TO_NTUPLES}/${SAMPLE_TYPE}); do

	# Filter unwanted files...
	SKIP=0
	for filter_out in "${FILTERS_OUT[@]}"; do
	    if [[ ${filter_out} != "" ]]; then 
		if [[ "${ROOT_FILE}" == *"${filter_out}"* ]]; then
		    echo "Exclude '${filter_out}' matched ${ROOT_FILE}, SKIPPING"
		    SKIP=1
		    break
		fi
	    else
		echo "No OUT filters, will process all files, unless IN is specified"
	    fi  
	done

	if [[ ${SKIP} -eq 1 ]]; then
	    continue
	fi

	for filter_in in "${FILTERS_IN[@]}"; do
	    if [[ ${filter_in} != "" ]]; then
		SKIP=1
		if [[ "${ROOT_FILE}" == *"${filter_in}"* ]]; then
		    echo "Include '${filter_in}' matched ${ROOT_FILE}, RUNNING"
		    SKIP=0
		    break
		fi
	    else
		echo "No IN filters, will process all files"
	    fi  
	done
	
	if [[ ${SKIP} -eq 1 ]]; then
	    continue
	fi

	# Full path to root file
	FILE=${PATH_TO_NTUPLES}/${SAMPLE_TYPE}/${ROOT_FILE}
	
	if [[ ! $(${LIST} ${FILE}) ]]; then
	    echo "File: ${FILE} does not exist... skipping"
	    continue
	fi
	    
	echo "Skimming: ${FILE}"

	# create the class associated with the TTree
	./${PRESKIM_OUT} ${FILE}
	# ./${PRESKIM_OUT} LOCALCOPY.root
	
	# Make sure this compiles ok...
	if $(g++ $RCOMP ${EXECUTABLE} -o ${SKIMOVER_OUT}); then
	    # ...and that binary now exists
	    if [[ ! -f ${SKIMOVER_OUT} ]]; then
		echo "Missing binary file: ${SKIMOVER_OUT}"
		echo "Exiting..."
		exit 1
	    fi
	else
	    echo "Compile Error... Exiting"
	    exit 1
	fi
	
	# Now skim!
	./${SKIMOVER_OUT}
	
	# and move...
	# echo ">> mv small.root ${PATH_TO_SKIMS}/${SAMPLE_TYPE}/${ROOT_FILE}"
	# mv small.root ${PATH_TO_SKIMS}/${SAMPLE_TYPE}/${ROOT_FILE}
	
	echo ">> mv small.root ${PATH_TO_SKIMS}/${SAMPLE_TYPE}/${ROOT_FILE}"
	mv small.root ${PATH_TO_SKIMS}/${SAMPLE_TYPE}/${ROOT_FILE}
	
    done
done		       
    
# For reference, quick and dirty way
# for j in Data QCD ST TTV VV VVV W+Jets; do for i in $(ls /Volumes/WineCellar/KState/analysis/Wto3pi_2018/${j}); do ./skimquick /Volumes/WineCellar/KState/analysis/Wto3pi_2018/${j}/${i}; g++ $RCOMP ${EXECUTABLE} -o overskim; ./overskim; mv small.root /Volumes/WineCellar/KState/skims/Wto3pi_2018/${j}/${i}; done

# For a single sample type
# for i in $(ls /Volumes/WineCellar/KState/analysis/Wto3pi_2018/DY); do ./skimquick /Volumes/WineCellar/KState/analysis/Wto3pi_2018/DY/${i}; g++ $RCOMP skimOver.C -o overskim; ./overskim; mv small.root /Volumes/WineCellar/KState/skims/Wto3pi_2018/DY/${i}; done
