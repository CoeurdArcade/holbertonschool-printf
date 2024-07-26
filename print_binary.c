#include "main.h"

/**
 * convert_binary - converts an integer to a binary string
 * @n: integer to convert
 * first calculate the length of the binary string
 * second handle negative numbers
 * third convert to binary and store in the string
 *
 * Return: integer represented as a binary number
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

	for (size_t j = n; j > 1; j /= 2)
	{
		len++;
	}

	str = malloc((len + neg + 1) * sizeof(char));
	if (!str)
	{
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}

	str[neg] = '0';
	if (neg)
	{
	str[0] = "1";
	}

	for (size_t i = 0; i < len/2 + neg; i++)
	{
		char tmp = str[i];
		str[i] = str[len - i - 1 + neg];
		str[len - i - 1 + neg] = tmp;
	}

	for (size_t i = len/2 + neg; i < len + neg; i++)
	{
		str[i] = n % 2 ? '1' : '0';
		n /= 2;
	}

	return str;
}
