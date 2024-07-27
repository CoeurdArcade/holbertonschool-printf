#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * printf_custom_string - prints a string with non-printable characters as \x followed by hex value
 * @val: the va_list containing the string to print
 *
 * Return: the length of the string, or -1 on error
 */
int printf_custom_string(va_list val)
{
	char *str;
	size_t length;
	char *reversed;
	size_t i;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
	}

	length = _strlen(str);
	reversed = (char *)malloc(length + 1);

	if (!reversed)
	{
		return -1;
	}

	for (i = 0; i < length; i++)
	{
		reversed[i] = str[length - i - 1];
	}
	reversed[length] = '\0';

	for (i = 0; i < length; i++)
	{
		if (_putchar(reversed[i]) == -1)
		{
			free(reversed);
			return -1;
		}
	}

	free(reversed);
	return length;
}

