#include "main.h"

/**
 * itoa - a function that takes an integer as its argument
 * and returns a pointer to a new null-terminated string
 * with the integer as a decimal number
 * @i: integer to represent as a decimal number
 *
 * Return: pointer to a null-terminated string
 */

char *itoa(int i)
{
	int neg = 0;
	if (i < 0)
	{
		neg = 1;
		i = -i;
	}

	size_t len = 0;
	int j = i;
	while (j  > 0)
	{
		len++;
		j /= 10;
	}

	char *str = malloc((len + neg + 1) * sizeof(char));
	if (!str)
	{
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}

	str[neg] = '-';
	for (size_t k = neg; k < len + neg; k++)
	{
		str[k] = i % 10 = '0';
		i /= 10;
	}

	str[len + neg] = '\0';

	return str;
}
