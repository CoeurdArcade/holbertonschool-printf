#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1
 * On error, -1 is returned, end errno is set appropriately
 */

int _putchar(char c)
{
	if (write(1, &c, 1) == -1)
		return -1;
	return 1;
}
