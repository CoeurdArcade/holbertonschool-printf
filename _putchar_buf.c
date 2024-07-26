#include <unistd.h>
#include "main.h"

/**
 * _putchar_buf - writes a buffer of characters
 * to stdout
 * @buf: the buffer of characters to write
 * @len: length of the buffer to write
 *
 * Return: On success 1, number of bytes written on error -1
 * is returned, and errno is set appropriately
 */

int _putchar_buf(char *buf, size_t len)
{
	if (write(1, buf, len) < 0)
	{
	return -1;
	}
	return 1;
}

/**
 * _putchar - writes a character to stdout
 * @c: the character to write
 *
 * Return: On success 1, on error -1 is returned, and errno
 * is set appropriately
 */

int _putchar(char c)
{
	return write(1, &c, 1);
}
