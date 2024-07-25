#include <stdio.h>
#include <stdarg.h>
#include <ctype.h>
#include "main.h"

/**
 * printf_string - print a string.
 * @val: argument.
 *
 * Return: the length of the string, or -1 on error.
 */

/**
 * helper function to check if the argument is a string
 */

int is_string(const char *str)
{
	/**
	 * iterate through each character in the string
	 */
	for (; *str != '\0'; str++)
	{
		/**
		 * check if any non-printable characters are present
		 */
		if (!isprint(*str))
		{
			return 0;
		}
	}

	/**
	 * if all characters are printable, the argument is a string
	 */
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

	/**
	 * check if the argument is a string
	 */
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

