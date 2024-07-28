#include <stdio.h>
#include "main.h"

/**
 * printf_char - Prints a char.
 * @val: The argument to print.
 *
 * Return: 1.
 */

int _char(va_list val, int flag)
{
	int count = 0;
	char c;

	while ((c = va_arg(val, int)) != '\0')
	{
		if (flag)
		{
			putchar(c);
		}
		else
		{
			putchar(c + 32);
		}
		count++;
	}
	putchar ('\n');
	return count;
}
