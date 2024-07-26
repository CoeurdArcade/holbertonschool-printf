#include <stdio.h>
#include "main.h"

/**
 * reverse - a function that reverses a string
 * @str: string to reverse
 * it has to be allocated on memory before
 *
 * Return: reverse result
 */

char *reverse(char *str)
{
	size_t len;
	char *rev = malloc((strlen(str) + 1) * sizeof(char));

	if (!rev)
	{
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}

	len = _strlen(str);

	for (size_t i = 0; i < len; i++)
	{
		rev[i] = str[len - i - 1];
	}
	rev[len] = '\0';

	return rev;
}
