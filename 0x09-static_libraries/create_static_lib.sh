#!/bin/bash

# Create a static library from all .c files in the current directory
gcc -c *.c                      # Compile all .c files to object files
ar rcs liball.a *.o             # Create static library from object files
