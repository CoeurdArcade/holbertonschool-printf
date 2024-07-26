#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - a function that produces output according to a format
 * @va_list: initializes the variable arguments list
 * @vfprint: prints the formatted string
 * @va_end: cleans up the variable arguments list
 *
 * Return: Output result
 */

int _printf(const char *format, ...) {
	va_list args;
	int result;

	va_start(args, format);

	result = vfprintf(stdout, format, args);

	va_end(args);

	return result;
}
