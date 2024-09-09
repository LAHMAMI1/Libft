# Libft

Libft is a custom C library that implements a variety of functions commonly found in the C Standard Library. The purpose of this project is to deepen understanding of these standard functions by re-implementing them from scratch. This library will be useful for future C projects and will help develop a solid foundation in C programming.

## Table of Contents

- [Introduction](#introduction)
- [Functions Overview](#functions-overview)
  - [Libc Functions](#libc-functions)
  - [Additional Functions](#additional-functions)
- [Compilation](#compilation)
- [Usage](#usage)

## Introduction

Libft is your first custom C library, consisting of a collection of functions that will serve as useful tools for various C programming tasks. These functions mimic the behavior of standard C library functions and provide additional utility functions to handle strings and memory.

## Functions Overview

### Libc Functions

The following functions are re-implemented from the C Standard Library (`libc`) and have the same prototypes and behaviors as the original:

- `ft_isalpha`: Checks if the character is an alphabet letter.
- `ft_isdigit`: Checks if the character is a digit.
- `ft_isalnum`: Checks if the character is alphanumeric.
- `ft_isascii`: Checks if the character is an ASCII character.
- `ft_isprint`: Checks if the character is printable.
- `ft_strlen`: Returns the length of a string.
- `ft_memset`: Fills a memory block with a specific byte.
- `ft_bzero`: Zeros out a memory block.
- `ft_memcpy`: Copies a memory block.
- `ft_memmove`: Moves memory, even if overlapping.
- `ft_strlcpy`: Safely copies a string to a buffer.
- `ft_strlcat`: Safely concatenates a string to a buffer.
- `ft_toupper`: Converts a character to uppercase.
- `ft_tolower`: Converts a character to lowercase.
- `ft_strchr`: Finds a character in a string.
- `ft_strrchr`: Finds the last occurrence of a character in a string.
- `ft_strncmp`: Compares two strings up to a certain number of characters.
- `ft_memchr`: Locates a byte in memory.
- `ft_memcmp`: Compares two blocks of memory.
- `ft_strnstr`: Locates a substring in a string.
- `ft_atoi`: Converts a string to an integer.
- `ft_calloc`: Allocates memory and initializes it to zero.
- `ft_strdup`: Duplicates a string.

### Additional Functions

In addition to the libc functions, the following utility functions are also implemented:

- `ft_substr`: Extracts a substring from a string.
- `ft_strjoin`: Concatenates two strings.
- `ft_strtrim`: Trims specified characters from both ends of a string.
- `ft_split`: Splits a string into an array based on a delimiter.
- `ft_itoa`: Converts an integer to a string.
- `ft_strmapi`: Applies a function to each character of a string, returning a new string.
- `ft_striteri`: Applies a function to each character of a string in-place.
- `ft_putchar_fd`: Outputs a character to a file descriptor.
- `ft_putstr_fd`: Outputs a string to a file descriptor.
- `ft_putendl_fd`: Outputs a string followed by a newline to a file descriptor.
- `ft_putnbr_fd`: Outputs an integer to a file descriptor.

## Compilation

To compile the library, run the following command:

```bash
make
```
This will generate the `libft.a` static library file, which you can link to your own C programs.

To clean up object files:

```bash
make clean
```

To remove all compiled files, including the library:

```bash
make fclean
```

To recompile everything from scratch:

```bash
make re
```

## Usage

To use Libft in your own C project, include the `libft.h` header and link the compiled `libft.a` library during compilation.

Example usage:

```c
#include "libft.h"

int main() 
{
    char *str = ft_strdup("Hello, world!");
    ft_putstr_fd(str, 1);
    free(str);
    return 0;
}
