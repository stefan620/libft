# Libft - 42 Project

Libft is a custom C library that replicates a subset of the standard C library functions, along with additional utility functions that are often useful in C programming. This project is part of the 42 curriculum and serves as a foundation for many other projects.

## Table of Contents

- [About the Project](#about-the-project)
- [Features](#features)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
- [Functions Implemented](#functions-implemented)
  - [Part 1 - Libc Functions](#part-1---libc-functions)
  - [Part 2 - Additional Functions](#part-2---additional-functions)
  - [Bonus - Linked List Functions](#bonus---linked-list-functions)

---

## About the Project

The goal of Libft is to develop a solid understanding of C programming by re-implementing standard library functions from scratch. It provides functions for string manipulation, memory management, linked lists, and more.

---

## Features

- Custom implementation of common standard library functions.
- Additional helper functions for string and memory operations.
- Introduction to linked list data structures.

---

### Prerequisites

To compile and use the library, you need:
- A GCC-compatible C compiler.
- `make` utility installed on your system.

### Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/<your-username>/libft.git
   cd libft

### Functions Implemented
Part 1 - Libc Functions

    | **Function**       | **Description**                                          |
|---------------------|----------------------------------------------------------|
| `ft_memset`         | Fills memory with a constant byte.                       |
| `ft_bzero`          | Zeros out a block of memory.                             |
| `ft_memcpy`         | Copies memory area.                                     |
| `ft_memccpy`        | Copies memory until a specific character is found.      |
| `ft_memmove`        | Copies memory safely (handles overlapping areas).       |
| `ft_memchr`         | Scans memory for a specific byte.                       |
| `ft_memcmp`         | Compares two blocks of memory.                          |
| `ft_strlen`         | Calculates the length of a string.                      |
| `ft_isalpha`        | Checks if a character is alphabetic.                    |
| `ft_isdigit`        | Checks if a character is a digit.                       |
| `ft_isalnum`        | Checks if a character is alphanumeric.                  |
| `ft_isascii`        | Checks if a character is in the ASCII set.              |
| `ft_isprint`        | Checks if a character is printable.                     |
| `ft_toupper`        | Converts a character to uppercase.                      |
| `ft_tolower`        | Converts a character to lowercase.                      |
| `ft_strchr`         | Locates the first occurrence of a character in a string.|
| `ft_strrchr`        | Locates the last occurrence of a character in a string. |
| `ft_strncmp`        | Compares two strings up to a given number of characters.|
| `ft_strlcpy`        | Copies a string with size limit.                        |
| `ft_strlcat`        | Concatenates strings with size limit.                   |
| `ft_strnstr`        | Locates a substring within a string.                    |
| `ft_atoi`           | Converts a string to an integer.                        |
| `ft_calloc`         | Allocates and clears memory.                            |
| `ft_strdup`         | Duplicates a string.                                    |

Part 2 - Additional Functions
   
| **Function**       | **Description**                                          |
|---------------------|----------------------------------------------------------|
| `ft_substr`         | Extracts a substring from a string.                      |
| `ft_strjoin`        | Concatenates two strings into a new string.              |
| `ft_strtrim`        | Trims specified characters from the start and end of a string. |
| `ft_split`          | Splits a string into an array based on a delimiter.      |
| `ft_itoa`           | Converts an integer to a string.                        |
| `ft_strmapi`        | Applies a function to each character of a string.       |
| `ft_putchar_fd`     | Writes a character to a file descriptor.                |
| `ft_putstr_fd`      | Writes a string to a file descriptor.                   |
| `ft_putendl_fd`     | Writes a string followed by a newline to a file descriptor.|
| `ft_putnbr_fd`      | Writes an integer to a file descriptor.                 |

Bonus - Linked List Functions

| **Function**       | **Description**                                          |
|---------------------|----------------------------------------------------------|
| `ft_lstnew`         | Creates a new list node.                                 |
| `ft_lstadd_front`   | Adds a node to the beginning of the list.                |
| `ft_lstsize`        | Counts the number of nodes in a list.                   |
| `ft_lstlast`        | Returns the last node of the list.                      |
| `ft_lstadd_back`    | Adds a node to the end of the list.                     |
| `ft_lstdelone`      | Deletes a single node from the list.                    |
| `ft_lstclear`       | Deletes and frees all nodes in the list.                |
| `ft_lstiter`        | Iterates over the list and applies a function to each node. |
| `ft_lstmap`         | Applies a function to each node and creates a new list. |

