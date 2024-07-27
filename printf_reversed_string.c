#include <stdarg.h>
#include <stdio.h>
#include <string.h>

void printf_reversed_string(const char *str)
{
	if (str == NULL) return;

	const char *end = str + strlen(str) - 1;

	while (end >= str)
	{
		putchar(*end);
		end--;
	}
}

void _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 's')
			{	
				const char *str = va_arg(args, const char *);
				printf_reversed_string(str);
			}
			/* Handle other format specifiers here */
		}
		else
		{
			putchar(*format);
		}
		format++;
	}

	va_end(args);
}

int main()
{
	_printf("Reversed string: %s\n", "Hello, World!");
	return 0;
}

