#! /bin/bash

set -e

DOC_PATH="${SRCROOT}/Doc"

if [ -d $DOC_PATH ]; then
rm -rf $DOC_PATH
fi

mkdir -p $DOC_PATH

## Generate doc
#headerdoc2html -o $DOC_PATH "${SRCROOT}/CommonSDK"
#resolveLinks $DOC_PATH
#gatherheaderdoc $DOC_PATH
#
## Delete empty directories
#find $DOC_PATH -type d -empty -delete

cd ${SRCROOT}/Salida
doxygen ../Salida/Doxyfile
