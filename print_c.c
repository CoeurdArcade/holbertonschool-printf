#include <stdio.h>
#include "main.h"

/**
 * printf_char - Prints a char.
 * @val: The argument to print.
 *
 * Return: 1.
 */

int _char(va_list val, int flag)
{
        /* Suppress unused parameter warning */
        (void)flag;

        /* Retrieve the character from the va_list */
        c = va_arg(val, int);

        /* Print the character */
        _putchar(c);

        /* Return the number of characters printed */
        return 1;
}

