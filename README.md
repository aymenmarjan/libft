# Libft

A custom C library created during the 42 curriculum.  
It reimplements essential standard functions and provides useful tools for strings, memory, and linked lists.

## Features
- Re-coded libc functions  
- String and memory utilities  
- Linked list helpers  

## Function List

| Function | Description |
|----------|-------------|
| `ft_isalpha` | Checks if a character is alphabetic |
| `ft_isdigit` | Checks if a character is a digit |
| `ft_isalnum` | Checks if a character is alphanumeric |
| `ft_isascii` | Checks if a character is a valid ASCII value |
| `ft_isprint` | Checks if a character is printable |
| `ft_strlen` | Returns the length of a string |
| `ft_memset` | Fills memory with a constant byte |
| `ft_bzero` | Sets a memory area to zero |
| `ft_memcpy` | Copies memory until a number of bytes |
| `ft_memmove` | Copies memory handling overlap safely |
| `ft_strlcpy` | Copies a string with size limit |
| `ft_strlcat` | Concatenates strings with size limit |
| `ft_toupper` | Converts a character to uppercase |
| `ft_tolower` | Converts a character to lowercase |
| `ft_strchr` | Finds first occurrence of a character in string |
| `ft_strrchr` | Finds last occurrence of a character in string |
| `ft_strncmp` | Compares two strings up to n characters |
| `ft_memchr` | Searches a byte in memory |
| `ft_memcmp` | Compares two memory regions |
| `ft_strnstr` | Locates a substring in a string |
| `ft_atoi` | Converts a string to an integer |
| `ft_calloc` | Allocates and zeroes memory |
| `ft_strdup` | Duplicates a string |
| `ft_substr` | Extracts a substring from a string |
| `ft_strjoin` | Concatenates two strings |
| `ft_strtrim` | Trims characters from beginning and end of string |
| `ft_split` | Splits string into array using delimiter |
| `ft_itoa` | Converts an integer to a string |
| `ft_strmapi` | Applies a function to each character and returns new string |
| `ft_striteri` | Applies a function to each character by reference |
| `ft_putchar_fd` | Writes a character to a file descriptor |
| `ft_putstr_fd` | Writes a string to a file descriptor |
| `ft_putendl_fd` | Writes a string with newline to a file descriptor |
| `ft_putnbr_fd` | Writes an integer to a file descriptor |
| `ft_lstnew` | Creates a new list node |
| `ft_lstadd_front` | Adds a node at the beginning of a list |
| `ft_lstsize` | Counts nodes in a list |
| `ft_lstlast` | Returns the last node of a list |
| `ft_lstadd_back` | Adds a node at the end of a list |
| `ft_lstdelone` | Deletes a node using a function to free its content |
| `ft_lstclear` | Deletes list and frees its nodes |
| `ft_lstiter` | Iterates on list and applies a function to each content |
| `ft_lstmap` | Maps a function to a list and creates a new list |


## Build
```bash
make
```

## Usage
Include it in your project:
```c
#include "libft.h"
```
