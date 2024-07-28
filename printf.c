#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - a function that produces output according to a format
 * @format: initializes the variable arguments list
 * prints the formatted string
 * cleans up the variable arguments list
 *
 * Return: Output result
 */

int _printf(const char *format, ...)
{
	va_list args;
	int result;

	va_start(args, format);

	result = vfprintf(stdout, format, args);

	va_end(args);

	return result;
}
