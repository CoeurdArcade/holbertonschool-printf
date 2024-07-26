#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * convert_binary - converts an integer to a binary string
 * @n: integer to convert
 *
 * Return: pointer to the new binary string, or NULL on failure
 */

char *convert_binary(int n)
{
	int i;
	char *str;

	str = malloc(33 * sizeof(char));
	if (!str)
	{
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}

	/* handle negative numbers */
	if (n < 0)
	{
		n = ~n + 1;
	}

	/* convert to binary and store in the string */
	for (i = 31; i >= 0; i--)
	{
		str[31 - i] = (n & (1 << i)) ? '1' : '0';
	}

	str[32] = '\0';

	return str;
}
