#! /bin/bash

set -e

brew install cmake

git clone https://github.com/doxygen/doxygen.git
cd doxygen

mkdir build
cd build
cmake -G "Unix Makefiles" ..
make
make install

cd ../..
rm -rf doxygen
