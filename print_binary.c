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
	int neg = 0;
	size_t len = 1;
	char *str;
	size_t i;

	/* handle negative numbers */
	if (n < 0)
	{
		neg = 1;
		n = ~n + 1;
	}

	for (len = 1; n > 1; len++)
	{
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}
	/* convert to binary and store in the string */
	str[len + neg] = '\0';
	for (i = 0; i < len; i++)
	{
		str[len - i - 1 + neg] = (n & (1 << i)) ? '1' : '0';
	}

	if (neg)
	{
		str[0] = '-';
	}

	return str;
}
