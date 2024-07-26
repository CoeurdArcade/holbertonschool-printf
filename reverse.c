#include "main.h"

/**
 * reverse - a function that reverses a string
 * @str: string to reverse
 *
 * Return: reverse result, or NULL if input is invalid
 */

char *reverse(char *str)
{
	if (str == NULL || *str == '\0')
	{
		return NULL;
	}

	size_t len = _strlen(str);
	char *rev = malloc((len + 1) * sizeof(char));
	if (!rev)
	{
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}

	for (size_t i = 0; i < len; i++)
	{
		rev[i] = str[len - i - 1];
	}
	rev[len] = '\0';

	return rev;
}
