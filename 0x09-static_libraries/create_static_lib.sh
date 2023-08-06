#!/bin/bash
gcc -wall -pedantic -werror -wextra -o .c
ar -rc liball.a *.c
ranlib liball.c
