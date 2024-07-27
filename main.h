#ifndef MAIN_H
#define MAIN_H
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

int is_string(const char *str);
int printf_string(va_list val);
size_t size_t__strlen(const char *s);
int _putchar(int c);
void printf_reversed_string(const char *format, const char *str);
int _printf(const char *format, ...);
int _putchar(char c);
int _string(va_list, int);
int _int(va_list, int);
int _char(va_list, int);
int _binary(va_list, int);
char *itoa(int i);
char *reverse(char *);
char *convert_binary(int);
int _strlen(char *str);
int _strlenc(const char *str);
int print_37(void);
#endif
