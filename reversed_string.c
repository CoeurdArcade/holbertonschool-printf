#include <stdio.h>
#include "main.h"

void printf_reversed_string(const char *str)
{
	if (str == NULL)
		return;

	const char *end = str;
	while (*end) ++end;

	for (--end; end >= str; --end)
	{
		putchar(*end);
	}
	putchar('\n');
}

