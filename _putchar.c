#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <errno.h>
#include "main.h"

/**
 * _putchar - Writes the character c to stdout.
 * @c: The character to print.
 *
 * Return: On success, returns 1.
 * On error, returns -1 and sets errno appropriately.
 */

int _putchar(char c)
{
	if (write(1, &c, 1) < 0)
	{
		perror("Error writing to stdout");
		return -1;
	}

	return 1;
}

/**
 * main - Tests the functionality of _putchar function
 *
 * Return: Always 0 on success
 */

int main(void)
{
	char c = 'a';

	if (_putchar(c) == EOF)
		perror("Error writing to stdout");
	else
		printf("Successfully wrote '%c' to stdout\n", c);

	return 0;
}
