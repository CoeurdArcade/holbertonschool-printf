#include <stdarg.h>
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
	(void)flag;
	int c;
	c = va_arg(val, int);
	putchar(c);

	return 1;
}

int _putchar(char c)
{
	return putchar(c);
}

int main()
{
	va_list val;
	int dummy;
	va_start(val, dummy);
	_char(val, 0);
	va_end(val);

	return 0;
}
