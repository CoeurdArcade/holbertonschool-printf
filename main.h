#ifndef MAIN_H
#define MAIN_H
#ifndef STDARG_H
#include <stdarg.h>
#define STDARG_H
#ifndef STDDEF_H
#include <stddef.h>
#define STDDEF_H

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
int print_s(va_list args);
int _putchar_buf(const char *buf, size_t len);
int is_string(const char *str);
int printf_string(va_list val);
int _putchar(int c);
int _printf(const char *format, ...);
int _string(va_list, int);
int _int(va_list, int);
int _char(va_list, int);
int _binary(va_list, int);
char *itoa(int i);
char *reverse(char *str);
char *convert_binary(int);
int _strlen(char *str);
int print_37(void);
void print_37(void);

#endif
