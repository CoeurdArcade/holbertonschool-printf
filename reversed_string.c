#include <stdio.h>
#include "main.h"

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
int main ()
{
	printf_reversed_string("Hello, World!");
	return 0;
}

