#!/bin/bash
gcc -Wall -FPIC -c *.c
gcc -shared -Wl,-soname,liball.so -o liball.so *.o
