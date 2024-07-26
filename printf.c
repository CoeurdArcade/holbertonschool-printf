#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * _printf - a function that produces output according to a format
 * @format: initializes the variable arguments list
 * prints the formated string
 * cleans up the variable arguments list
 *
 * Return: Output result
 */

int _printf(const char *format, ...)
{
	va_list args;
	int result = 0;

	if (format == NULL)
		return -1;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
			break;

			if (*format == 'c')
			{
				result += _putchar(va_arg(args, int));
			}
			else if (*format == 's')
			{
				result += printf_string(args);
			}
			else if (*format == '%')
			{
				result += _putchar('%');
			}
			else
			{
				result += _putchar('%')
				result += _putchar(*format);
			}
		}
		else
		{
			result += _putchar(*format);
		}
		format++;
	}

	va_end(args);

	return result;
}
