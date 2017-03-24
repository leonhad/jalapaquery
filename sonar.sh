#!/bin/bash

rm -rf out/
build-wrapper --out-dir out/ make all
make check
xsltproc cppunit-1.x-to-junit-1.0.xsl src/cppunit.xml > out/cppunit.xml
rm out/cppunit.xml
gcovr -x -r . > out/gcov.xml
cppcheck --quiet --check-config --enable=all --xml --xml-version=2 -I src src 2> out/cppcheck.xml
rats -w 3 --xml src > out/rats.xml
find . | grep ".*\.cpp\|.*\.h" | vera++ -d -s -c out/vera.xml
sonar-scanner
