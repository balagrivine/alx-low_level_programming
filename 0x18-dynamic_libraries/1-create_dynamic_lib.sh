#!/bin/bash
gcc -Wall -Werror -Wextra -std=gnu89 -shared -o liball.so -fpic -L. *.c
