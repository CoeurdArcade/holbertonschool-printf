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

	/* Retrieve the next argument from the variable argument list */
	c = va_arg(val, int);

	/* Check if the value is a valid character */
	if (c < 0 || c > 127)
	{
	/* If it's not, print an error message and return an error code */
	_putchar('%');
	_putchar('?');
	return (1);
	}

	/* Print the character to the standard output */
	_putchar(c);
	return (1);

}
