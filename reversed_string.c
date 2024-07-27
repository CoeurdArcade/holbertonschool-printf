#include <stdio.h>
#include "main.h"

/**
 * printf_reversed_string - Prints a string in reverse
 * @str: The string to be printed in reverse
 *
 * Description: This function takes a string as input and prints it in reverse.
 */

void printf_reversed_string(const char *str)
{
	const char *end;
	int length;

	length = strlen(str);
	end = str + length - 1;

	while (end >= str)
	{
		putchar(*end);
		end--;
	}

	putchar('\n');
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main ()
{
	printf_reversed_string("Hello, World!");
	return 0;
}

