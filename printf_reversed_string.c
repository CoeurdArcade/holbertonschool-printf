#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * printf_reversed_string - Prints a string in reverse.
 * @val: The string to be printed in reverse.
 *
 * Return: void.
 */

int printf_reversed_string(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	const char *str = va_arg(args, const char *);
	printf(format, str);

	va_end(args);
	return 0;
}
