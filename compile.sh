#!/usr/bin/env bash
# Script to compile the code

# gcc -Wall -Wextra -Werror main.c -lSDL2 -o $1
gcc main.c -lSDL2 -o $1
