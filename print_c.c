#include "main.h"

/**
 * printf_char - Prints a char.
 * @val: The argument to print.
 *
 * Return: 1.
 */
int printf_char(va_list val)
{
    char c;

    c = va_arg(val, int);
    _putchar(c);
    return (1);
}
 
