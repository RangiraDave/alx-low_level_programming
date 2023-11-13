#!/bin/bash
gcc -C -fPIC *.c
gcc *.o -shared -o liball.so
