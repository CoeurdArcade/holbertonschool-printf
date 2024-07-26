#include <stdio.h>
#include <stdarg.h>
#include <ctype.h>
#include "main.h"

/**
 * is_string - checks if a given argument is a string
 * @str: the argument to check
 * 
 * Return: 1 if the argument is a string, 0 otherwise.
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

/**
 * _strlen - calculates the length of a string
 * @s: the string to calculate the length of
 *
 * Return: the length of the string
 */
size_t _strlen(const char *s)
{
	size_t len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return len;
}

/**
 * _putchar - writes a character to stdout
 * @c: the character to write
 *
 * Return: 1 on success, EOF on failure
 */
int _putchar(int c)
{
	return (write(1, &c, 1));
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
