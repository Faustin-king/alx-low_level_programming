#!/bin/bash

# Compile each .c file into individual object files

for source_file in *.c; do
	gcc -c "$source_file"

done

# Create the static library using the ar command
ar rcs liball.a *.o


# Clean up the temporary object files

rm *.o
