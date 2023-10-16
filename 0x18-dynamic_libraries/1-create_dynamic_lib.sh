#!/bin/bash
gcc -wall -wextra -werror -pedantic -C -fPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:SLD_LIBRARY_PATH
