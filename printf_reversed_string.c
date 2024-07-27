#include <stdio.h>
#include <string.h>

/**
 * printf_reversed_string - Prints a string in reverse.
 * @str: The string to be printed in reverse.
 *
 * Return: void.
 */

void printf_reversed_string(const char *format, const char *str)
{
	int len = strlen(str);
	char reversed [len + 1];

	for (int i = 0; i < len; i++)
	{
		reversed[i] = str[len - 1 - i];
	}
	reversed[len] = '\0';
	printf(format, reversed);
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
