#!/bin/bash

# Compile the library source files
gcc -c -Wall -Werror -Wextra ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

# Create the library archive
ar rcs libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
