#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * struct specfunc - struc to couple a specifier to a function
 * @flag: specifier
 * @func: pointer to the function
 * Description: interpret the specifier and the related function
 */

typedef struct specfunc
{
	char *flag;
	int (*func)(va_list, int);
} SF;

int _putchar(char c)
int _putchar_buf(char *buf, size_t len);
int _printf(const char *format, ...);
int printf_char(va_list val);
int printf_string(va_list val);
char *convert_binary(int n);
int is_string(const char *str);
int print_s(va_list args);
size_t _strlen(const char *s);
int _strlenc(const char *str);
char *reverse(char *str);

#endif /* MAIN_H */
