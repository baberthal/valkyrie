#!/bin/bash
#
bakClean -r
rm -f ./bin/valkyrie
make clean
./configure --debug --thread=yes --vg-exec=/home/sewardj/Vg3LINE/trunk/Inst/bin/valgrind --vg-supp=/home/sewardj/Vg3LINE/trunk/Inst/lib/valgrind/
make
#./bin/valkyrie