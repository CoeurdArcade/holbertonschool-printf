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
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
