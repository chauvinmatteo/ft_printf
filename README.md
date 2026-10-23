*This project has been created as part of the 42 curriculum by mchauvin.*

# ft_printf

## Description

**ft_printf** is my own implementation of the C `printf` function, written from scratch using variadic arguments (`<stdarg.h>`). It writes formatted output to the standard output and returns the number of characters printed, like the original.

The project compiles into a static library, `libftprintf.a`.

### Supported conversions

| Specifier | Output |
|---|---|
| `%c` | a single character |
| `%s` | a string |
| `%p` | a pointer address in hexadecimal |
| `%d` / `%i` | a signed decimal integer |
| `%u` | an unsigned decimal integer |
| `%x` | an unsigned integer in lowercase hexadecimal |
| `%X` | an unsigned integer in uppercase hexadecimal |
| `%%` | a literal percent sign |

### Structure

- `ft_printf.c` walks through the format string and handles the variadic arguments.
- `ft_dispatch_format.c` maps each specifier to its printing function.
- `ft_print_char.c`, `ft_print_str.c`, `ft_print_nbr.c`, `ft_print_unnbr.c`, `ft_print_hex.c` and `ft_print_ptr.c` each print one kind of value and return the number of characters written.

## Instructions

### Compilation

```sh
make            # builds libftprintf.a
make clean      # removes object files
make fclean     # removes object files and the library
make re         # rebuilds everything
```

### Usage

```c
#include "ft_printf.h"

int main(void)
{
    int count = ft_printf("Hello %s, number %d, hex %x\n", "42", 42, 255);
    ft_printf("%d characters printed\n", count);
    return (0);
}
```

```sh
cc -Wall -Wextra -Werror main.c libftprintf.a -I. -o my_program
```

## Resources

- `man 3 printf` and `man 3 stdarg`
- [Variadic functions in C](https://en.cppreference.com/w/c/variadic)
