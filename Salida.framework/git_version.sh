#! /bin/bash

set -e
version=`git describe --tags | cut -d 'v' -f2-`
echo "Updating NMSVersion.h version to: ${version}"
sed -i -e "s/sdk_version_placeholder/$version/g" Salida/NMSVersion.h
