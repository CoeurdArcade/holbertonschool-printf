#include <stdarg.h>
#include "main.h"

/**
 * printf_char - Prints a char.
 * @val: The argument to print.
 *
 * Return: 1.
 */

int _char(va_list val, int flag)
{
	char c;

	c = va_arg(val, int flag);
	_putchar(c);
	return (1);
}
