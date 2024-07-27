#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to calculate
 *
 * Return: the length of the string
 */
size_t _strlen(const char *s)
{
	size_t length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return length;
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
	size_t length;
	size_t i;

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

void printf_reversed_string(const char *str)
{
	if (str == NULL)
		return;

	const char *end = str;
	while (*end) ++end;

	for (--end; end >= str; --end)
	{
		putchar(*end);
	}
	putchar('\n');
}
