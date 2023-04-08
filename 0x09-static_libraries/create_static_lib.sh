#!/bin/bash

# Compile all .c files into object files
gcc -c *.c

# Create the static library from the object files
ar rcs liball.a *.o

# Clean up by removing the object files
rm *.o
