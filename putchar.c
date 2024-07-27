#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1, on error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	static char buffer[1024];
	static int buffer_index = 0;

	buffer[buffer_index++] = c;

	if (buffer_index >= 1024)
	{
		if (write(1, buffer, buffer_index) == -1)
			return -1;
		buffer_index = 0;
	}

	return 1;
}

/**
 * _flush_buffer - flushes the buffer to stdout
 *
 * Return: On success, the number of bytes written. On error, -1 is returned.
 */
int _flush_buffer()
{
	static char buffer[1024];
	static int buffer_index = 0;

	if (buffer_index > 0)
	{
		if (write(1, buffer, buffer_index) == -1)
			return -1;
		buffer_index = 0;
	}

	return 1;
}
