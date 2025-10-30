# libft

This is a custom implementation of the standard C library functions, created as part of the 42 school curriculum. The library provides a set of functions for memory management, string manipulation, character checks, linked lists, and more.

## Features
- Memory functions: `ft_memset`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`, etc.
- String functions: `ft_strlen`, `ft_strcpy`, `ft_strncpy`, `ft_strdup`, `ft_strcat`, `ft_strlcat`, `ft_strlcpy`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_substr`, etc.
- Character checks: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_tolower`, `ft_toupper`.
- Conversion: `ft_atoi`, `ft_atol`, `ft_itoa`.
- Output: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.
- Linked list utilities: `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

## Usage
1. Compile the library:
   ```bash
   make
   ```
2. Include the header in your project:
   ```c
   #include "libft.h"
   ```

## File Structure
- `libft.h`: Header file with all function prototypes.
- `libft.a`: Static library archive generated after compilation.
- Source files: Each function is implemented in its own `.c` file.
- `Makefile`: For building, cleaning, and rebuilding the library.

## License
This project is for educational purposes at 42 school.
