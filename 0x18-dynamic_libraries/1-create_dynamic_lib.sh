#!/bin/bash
gcc -shared -fPIC -o liball.so *.c
export LD_LIBRARY_PATH=/home/vagrant/holbertonschool-low_level_programming
/0x18-dynamic_libraries/:$LD_LIBRARY_PATH
