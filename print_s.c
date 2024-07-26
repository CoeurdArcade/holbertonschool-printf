#include <stdio.h>
#include <stdarg.h>
#include <ctype.h>
#include "main.h"

/**
 * printf_string - print a string.
 * @val: argument.
 * is string is a helper function to check if the
 * argument is a string and will iterate through
 * each character in the string, check is any
 * non printable characters are present, if all
 * characters are printable the argument is a string
 * also at the end another check if the argument is
 * a string
 * 
 * Return: the length of the string, or -1 on error.
 */

int is_string(const char *str)
{
	for (; *str != '\0'; str++)
	{
		if (!isprint(*str))
		{
			return 0;
		}
	}

	return 1;
}
int printf_string(va_list val)
{
	char *str;
	int i, length;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
	}

	if (!is_string(str))
	{
		return -1;
	}

	length = _strlen(str);
	for (i = 0; i < length; i++)
	{
		_putchar(str[i]);
	}
	return (length);
}

