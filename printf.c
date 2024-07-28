#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...)
{
	va_list args;
	int result;

	/**
	 *  Initialize the variable arguments list
	 */
	va_start(args, format);

	/** Print the formatted string using vfprintf
	 *
	 */
	result = vfprintf(stdout, format, args);

	/**
	 *  Clean up the variable arguments list
	 */
	va_end(args);

	return result;
}
