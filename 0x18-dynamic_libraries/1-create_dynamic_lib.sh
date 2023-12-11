#!/bin/bash
if [ -z "$(ls *.c 2>/dev/null)" ]; then
    echo "No .c files found in the current directory."
    exit 1
fi

gcc *.c -c -fpic
gcc *.o -o liball.so
