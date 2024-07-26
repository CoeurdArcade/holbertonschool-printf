#include "main.h"

/**
 * convert_binary - a function that takes an integer as its argument
 * to convert to a pointer to a new null-terminated string with the
 * integer as a binary number
 * @n: integer to convert
 *
 * Return: integer represented as a binary number
 */

char *convert_binary(int n)
{
	int neg = 0;
	if (n < 0)
	{
	neg = 1;
	n = -n;
	}

	size_t len = 1;
	int j = n;
	while (j > 1)
	{
	len++;
	j /= 2;
	}

	char *str = malloc((len + neg + 1) * sizeof(char));
	if (!str)
	{
	perror("malloc failed");
	exit(EXIT_FAILURE);
	}

	str[neg] = '0';
	for (size_t = 0; l < len/2 + neg; l++)
	{
	char tmp = str[l];
	str[l] = str[len - l - 1 + neg];
	str[len - l - 1 + neg] = tmp;
	}

	return str;
}
