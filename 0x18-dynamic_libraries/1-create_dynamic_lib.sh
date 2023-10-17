#!/bin/bash
gcc  -C -fPIC *.c
gcc -shared -o liball.so *.o
