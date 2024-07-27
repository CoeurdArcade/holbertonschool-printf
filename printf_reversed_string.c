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
	const char *str;

	va_start(args, const char *);

	int length = 0;
	const char *ptr = str;

	while (*ptr++)
	{
		length++;
	}

	for (int i =length - 1; i >= 0; i--)
	{
		putchar(str[i]);
	}

	va_end(args);
	return 0;
}

int main()
{
    printf_reversed_string("%s", "Hello, World!");
    return 0;
}
