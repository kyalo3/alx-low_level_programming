#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar rcs liball.s *.o
ranlib liball.a
