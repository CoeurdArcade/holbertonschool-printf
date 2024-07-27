#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * printf_reversed_string - Prints a string in reverse.
 * @str: The string to be printed in reverse.
 *
 * Return: void.
 */

int printf_reversed_string(va_list val)
{
	const char *str = va_arg(val, const char *);
	int len = strlen(str);
	char *reversed = malloc(len + 1);
	int i;

	if (!reversed) return -1;

	for (i = 0; i < len; i++)
	{
		reversed[i] = str[len - 1 - i];
	}
	reversed[len] = '\0';

	printf("%s", reversed);
	free(reversed);
	return len;
}
