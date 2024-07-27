#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * printf_int - prints an integer
 * @val: the va_list containing the integer to print
 * @length_modifier: the length modifier (0 for none, 1 for 'h', 2 for 'l')
 * @field_width: the field width
 * @precision: the precision
 * @zero_padding: flag to pad with zeros
 * @negative_flag: flag to indicate negative sign
 *
 * Return: the number of characters printed, or -1 on error
 */
int printf_int(va_list val, int length_modifier, int field_width, int precision, int zero_padding, int negative_flag)
{
	long int num;
	int count = 0;
	long int temp;
	char buffer[20]; /* Assuming a reasonable maximum size for the buffer */
	int i;
	int j;

	if (length_modifier == 1)
		num = (short)va_arg(val, int);
	else if (length_modifier == 2)
		num = va_arg(val, long int);
	else
		num = va_arg(val, int);

	if (num < 0 && negative_flag)
	{
		if (_putchar('-') == -1)
			return -1;
		count++;
		num = -num;
	}

	temp = num;
	if (num == 0)
	{
		if (_putchar('0') == -1)
			return -1;
		count++;
		return count;
	}

	while (temp > 0)
	{
		temp /= 10;
		count++;
	}

	i = count - 1;

	while (num > 0)
	{
		buffer[i--] = (num % 10) + '0';
		num /= 10;
	}

	/* Handle field width */
	if (field_width > count)
	{
		for (j = 0; j < field_width - count; j++)
		{
			if (_putchar(zero_padding ? '0' : ' ') == -1)
				return -1;
		}
	}

	/* Handle precision */
	if (precision > count)
	{
		for (j = 0; j < precision - count; j++)
		{
			if (_putchar('0') == -1)
				return -1;
		}
	}

	for (i = 0; i < count; i++)
	{
		if (_putchar(buffer[i]) == -1)
			return -1;
	}

	return count;
}

