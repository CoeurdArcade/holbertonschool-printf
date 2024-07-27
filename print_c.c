#include <stdarg.h>
#include "main.h"

/**
 * printf_char - Prints a single character
 * @val: The argument to print
 *
 * Return: 1 on success, -1 on failure
 */
int printf_char(va_list val)
{
    int c;

    c = va_arg(val, int);

    if (_putchar(c) == -1)
        return -1;

    return 1;
}

