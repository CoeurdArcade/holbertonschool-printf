#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * printf_pointer - prints a pointer address
 * @val: the va_list containing the pointer to print
 *
 * Return: the number of characters printed, or -1 on error
 */
int printf_pointer(va_list val)
{
	void *ptr = va_arg(val, void *);
	unsigned long int addr = (unsigned long int)ptr;
	int count = 0;

	if (_putchar('0') == -1)
		return -1;
	if (_putchar('x') == -1)
		return -1;
	count += 2;

	char buffer[16]; /* 16 characters for a 64-bit address in hexadecimal */
	int i = 15;

	while (addr > 0)
	{
		buffer[i--] = (addr % 16) + ((addr % 16 > 9) ? 'A' - 10 : '0');
		addr /= 16;
	}

	for (; i >= 0; i--)
	{
		buffer[i] = '0';
	}

	for (i = 0; i < 16; i++)
	{
		if (_putchar(buffer[i]) == -1)
			return -1;
	}

	return count + 16;
}

