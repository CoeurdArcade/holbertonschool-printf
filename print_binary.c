#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * printf_binary - prints an unsigned int in binary format
 * @val: the va_list containing the unsigned int to print
 *
 * Return: the number of characters printed, or -1 on error
 */
int printf_binary(va_list val)
{
	unsigned int num = va_arg(val, unsigned int);
	int count = 0;
	int temp = num;

	if (num == 0)
	{
		if (_putchar('0') == -1)
			return -1;
		count++;
		return count;
	}

	while (temp > 0)
	{
		temp >>= 1;
		count++;
	}

	char buffer[count];
	int i = count - 1;

	while (num > 0)
	{
		buffer[i--] = (num & 1) + '0';
		num >>= 1;
	}

	for (i = 0; i < count; i++)
	{
		if (_putchar(buffer[i]) == -1)
			return -1;
	}

	return count;
}

