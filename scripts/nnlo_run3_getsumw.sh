#!/bin/bash
# quick script to help with getting nEvts

INYEAR=${1}
PorM=${2}
prefix="/hdfs/store/user/jnatoli/WJetsTo3PiGenProduction/";

if [[ ${INYEAR} == 2022 ]]; then
    YEAR=Run3Summer22
    enddir=Run3Summer22NanoAODv12-130X_mcRun3_2022_realistic_v5
    echo ">>> Counting events in ${YEAR}"
elif [[ ${INYEAR} == 2022EE ]]; then
    YEAR=Run3Summer22EE
    enddir=Run3Summer22EENanoAODv12-130X_mcRun3_2022_realistic_postEE_v5
    echo ">>> Counting events in ${YEAR}"
elif [[ ${INYEAR} == 2023 ]]; then
    YEAR=Run3Summer23
    enddir=Run3Summer23NanoAODv12-130X_mcRun3_2023_realistic_v14
    echo ">>> Counting events in ${YEAR}"
elif [[ ${INYEAR} == 2023BPix ]]; then
    YEAR=Run3Summer23BPix
    enddir=Run3Summer23BPixNanoAODv12-130X_mcRun3_2023_realistic_postBPix_v2
    echo ">>> Counting events in ${YEAR}"
else
    echo ">>> Invalid year ${YEAR} provided, exiting..."
    echo ">>> Please choose from: 2022, 2022EE, 2023, 2023BPix"
    exit 1
fi

# Make me not dumb
if [[ ${PorM} == plus || ${PorM} == minus ]]; then
    echo "Using sign: ${PorM}"
else
    echo "!!!ERROR!!! Not an acceptable sign!"
    exit 1
fi

enddir=/${enddir}/NANOAODSIM/
OUTFILE=${INYEAR}_${PorM}_files.txt
# Put together file names
jetdir="HIG-W${PorM}JetsTo3Pi-powhegMiNNLO-pythia8-photos-${YEAR}"
ls ${prefix}${jetdir}${enddir} > ${OUTFILE}
# ls /hdfs/store/user/jnatoli/WJetsTo3PiGenProduction/hadded/*_${PorM}-* > ${PorM}_files.txt
numFiles=$(wc -l ${OUTFILE})
echo "Counting events in ${numFiles} files"

# Now compile and run
g++ ${RCOMP} nnlo_run3_getsumw.C -o getsumw_nnlo || { echo "Compilation failed!"; exit 1; }
./getsumw_nnlo ${OUTFILE} ${prefix}${jetdir}${enddir} ${PorM}
rm getsumw_nnlo
