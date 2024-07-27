#include <stdio.h>
#include "main.h"

/**
 * _flush_buffer - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int _flush_buffer(void)
{
	printf("This message will be displayed before the flush.\n");
	_flush_buffer();
	printf("This message will be displayed after the flush.\n");

	return (0);
}
