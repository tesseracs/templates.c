#!/bin/sh
set -e
gcc -std=c11 -Wall -Wextra -O2 -o main main.c math_utils.c
./main
