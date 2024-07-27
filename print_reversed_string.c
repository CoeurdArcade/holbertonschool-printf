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
