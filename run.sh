#!/bin/sh
set -e
mkdir -p build
gcc -std=c11 -Wall -Wextra -Wpedantic -O2 -Iinclude src/main.c src/check.c src/report.c -o build/main
./build/main
