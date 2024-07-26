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
int _putchar_buf(char *buf, size_t len);
int _putchar(char c);
int main(void);
void print_37(void);
char *convert_binary(int n);
int printf_char(va_list val);
char *itoa(int i);
int is_string(const char *str);
size_t _strlen(const char *s);
int print_s(va_list args);
int _putchar(int c);
int printf_string(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int _printf(const char *format, ...);
int _putchar(int c);
char *reverse(char *str);

#endif
