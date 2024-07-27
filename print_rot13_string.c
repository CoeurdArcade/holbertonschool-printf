#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * printf_rot13_string - prints the rot13'ed string
 * @val: the va_list containing the string to print
 *
 * Return: the length of the string, or -1 on error
 */
int printf_rot13_string(va_list val)
{
	char *str;
	size_t length;
	int count = 0;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
	}

	length = _strlen(str);
	char *rot13 = malloc(length + 1);

	if (!rot13)
	{
		return -1;
	}

	for (size_t i = 0; i < length; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				rot13[i] = ((str[i] - 'a' + 13) % 26) + 'a';
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
			{
				rot13[i] = ((str[i] - 'A' + 13) % 26) + 'A';
			}
		}
		else
		{
			rot13[i] = str[i];
		}
	}
	rot13[length] = '\0';

	for (size_t i = 0; i < length; i++)
	{
		if (_putchar(rot13[i]) == -1)
		{
			free(rot13);
			return -1;
		}
	}

	free(rot13);
	return length;
}

