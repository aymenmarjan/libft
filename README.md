# Libft

A custom C library created during the 42 curriculum.  
It reimplements essential standard functions and provides useful tools for strings, memory, and linked lists.

## Features
- Re-coded libc functions  
- String and memory utilities  
- Linked list helpers  

## Function List

| Function        | Description |
|-----------------|-------------|
| `ft_strlen`     | Returns the length of a string |
| `ft_strdup`     | Duplicates a string in memory |
| `ft_strncmp`    | Compares two strings up to n characters |
| `ft_strjoin`    | Concatenates two strings into a new one |
| `ft_split`      | Splits a string into an array using a delimiter |
| `ft_atoi`       | Converts a string to an integer |
| `ft_isalpha`    | Checks if a character is alphabetic |
| `ft_isdigit`    | Checks if a character is numeric |
| `ft_calloc`     | Allocates zero-initialized memory |
| `ft_memset`     | Fills memory with a byte value |
| `ft_memcpy`     | Copies memory from src to dst |
| `ft_bzero`      | Sets memory to zero |
| `ft_putchar_fd` | Writes a character to a file descriptor |
| `ft_putstr_fd`  | Writes a string to a file descriptor |
| `ft_lstnew`     | Creates a new list node |
| `ft_lstadd_front` | Adds a node at the beginning of a list |
| `ft_lstadd_back`  | Adds a node at the end of a list |
| `ft_lstsize`    | Counts the number of nodes in a list |
| `ft_lstlast`    | Returns the last node of a list |
| `ft_lstdelone`  | Frees a single list node |
| `ft_lstclear`   | Frees an entire list |


## Build
```bash
make
```

## Usage
Include it in your project:
```c
#include "libft.h"
```
