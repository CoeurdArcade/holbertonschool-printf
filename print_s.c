#include <stdarg.h>
#include <string.h>
#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: the string to calculate the length of
 *
 * Return: the length of the string
 */
unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return len;
}

/**
 * printf_string - prints a string
 * @val: the va_list containing the string to print
 *
 * Return: the length of the string, or -1 on error
 */
int printf_string(va_list val)
{
	char *str;
	unsigned int length;
	unsigned int i;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
	}

	length = _strlen(str);
	for (i = 0; i < length; i++)
	{
		if (_putchar(str[i]) == -1)
			return -1;
	}
	return length;
}
