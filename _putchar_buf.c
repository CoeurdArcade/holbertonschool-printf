#include "main.h"

/**
 * _putchar_buf - writes a buffer of characters
 * to stdout
 * @buf: the buffer of characters to write
 * @len: The length of the buffer
 *
 * Return: On success 1
 * On error -1 is returned, and errno is set appropriately
 */

int _putchar_buf(const char *buf, size_t len)
{
	return (write(1, buf, len));
}
