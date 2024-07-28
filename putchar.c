#include <unistd.h>
#include "main.h"

/**
 * _putchar - Writes the character c to stdout.
 * @c: The character to print.
 *
 * Return: On success, returns 1.
 * On error, returns -1 and sets errno appropriately.
 */

int _putchar(int c)
{
	return write(1, &c, 1);
}
