#!/bin/bash
# 3 commands to clean the hadd commands

FILE=${1}

if [ ! -f ${FILE} ]; then
    echo "FILE: ${FILE} does not exist... exiting"
fi

echo "Cleaning FILE: ${FILE}"

sed -i '/Dry run/!d' ${FILE}
sed -i 's/>>>   Dry run: //g' ${FILE} 
sed -i "s/'//g" ${FILE} 

echo "You may now execute the commands in ${FILE} with the following command:"
echo ">>> while IFS= read -r line; do echo "'"'"*** EXECUTING: "'${line}"; ${line}'"; echo "'""'"; sleep 60; done < ${FILE}"
