#!/bin/bash
gcc -c *.c
ar -rc liball.a *.o -o create_static_lib.sh
