#!/bin/bash
NAME="Compiler Script"

read -p "What is the path to the script?: " progpath
read -p "Where do you want to compile to? (default=Compiled/*language*/*programname*): " progoutpath

extension="${progpath##*.}" # get only the extension
filename=$(basename -- "$progpath")
filename_noext="${filename%.*}"

if [ -z "$progoutpath" ]; then                          # check to see if progoutpath is empty
  progoutpath="Compiled/${extension}/${filename_noext}" # set the path for Compiler
fi

if [ "$extension" = "c" ]; then
  echo "Compiling C program: $filename_noext"
  gcc $progpath -o $progoutpath
  gcc $progpath -o $progoutpath.exe
else
  echo "Error, add this file type to the Compiled folder and to the runGCC.sh script"
fi

read -p "Would you like me to execute this program? (y/n)[default=y]: " execute
if [ "$execute" = "y" ] || [ -z "$execute" ]; then
  ./Compiled/${extension}/${filename_noext}
fi
