#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c | ar -rc liball.a | ar -t liball.a 
