#include <stdio.h>
#include <string.h>

/**
 * printf_reversed_string - Prints a string in reverse.
 * @str: The string to be printed in reverse.
 *
 * Return: void.
 */

void printf_reversed_string(const char *str)
{
	const char *end;
	int len;

	len = strlen(str);
	end = str + len - 1;

	while (end >= str)
	{
		putchar(*end);
		end--;
	}
	putchar ('\n');
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success).
 */

int main()
{
	printf_reversed_string("Reversed string: %s\n", "Hello, World!");
	return 0;
}
