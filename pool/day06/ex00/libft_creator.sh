#!/bin/sh
gcc -c ft*.c
ar rc libft.a *.o
ranlib libft.a
