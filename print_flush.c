#include <stdio.h>
#include "main.h"

/**
 * _flush_buffer - Flushes the standard output buffer
 *
 * Description: This function uses fflush to flush the standard output buffer,
 * forcing immediate display of anything pending in the buffer.
 */
void _flush_buffer(void)
{
	fflush(stdout);
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("This message will be displayed before the flush.\n");
	_flush_buffer();
	printf("This message will be displayed after the flush.\n");

	return (0);
}
