# Ecole42-libft

Ecole42-libft is a project from Ecole 42 that requires us to create our own implementation of some of the standard C library functions.

## Functions

Here's a list of the functions that we had to implement:

### Libc functions

- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memccpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`
- `ft_strlen`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_strchr`
- `ft_strrchr`
- `ft_strnstr`
- `ft_strncmp`
- `ft_atoi`
- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_toupper`
- `ft_tolower`

### Additional functions

- `ft_calloc`
- `ft_strdup`
- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

## Usage

To use the functions in your project, you can include the `libft.h` header file in your source files and compile your program with the `libft.a` library file.

Here's an example of how to compile a program that uses the `ft_strlen` function:

    gcc main.c libft.a -o myprogram
    ./myprogram
