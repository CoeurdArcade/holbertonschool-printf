#include <stdio.h>
#include <stdarg.h>
#include <ctype.h>
#include <unistd.h>
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
 * print_s - prints a string
 * @args: the va_list of arguments to print
 *
 * Return: The number of characters printed
 */

int print_s(va_list args)
{
	char *str = va_arg(args, char *);
	size_t len;

	if (str == NULL)
		str = "(null)";

	len = _strlen(str);

	return _putchar_buf(str, len);
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
	if (_putchar(str[i]) == -1)
		return -1;
	}
	return length;
}
