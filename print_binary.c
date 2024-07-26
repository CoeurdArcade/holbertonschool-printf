#include <stdlib.h>
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

	if (n < 0)
	{
		neg = 1;
		n = -n;
	}

	/* calculate the length of the binary string */
	for (len = 1; n > 1; len++)
	{
		n /= 2;
	}

	str = malloc((len + neg + 1) * sizeof(char));
	if (!str)
	{
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}

	/* handle negative numbers */
	str[0] = '0'+ neg;
	if (neg)
	{
		str[1] = "1";
		len--;
	}

	/* convert to binary and store in the string */
	for (size_t i = 0; i < len/2; i++)
	{
		char tmp = str[(len - 1)/2 + neg - i];
		str[i] = str[len - i - 1 + neg];
		str[(len - 1)/2 + neg - i] = tmp;
	}

	for (size_t i = len/2; i < len; i++)
	{
		str[i] = n % 2 ? '1' : '0';
		n /= 2;
	}

	return str;
}
