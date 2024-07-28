#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

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

/* Function prototypes */

int _putchar(int c);
int _printf(const char *format, ...);
int _strlen(char *str);
int _strlenc(const char *str);
int is_string(const char *str);
size_t size_t_strlen(const char *s);
int _putchar(char c);
int printf_string(va_list val);
int print_37(void);

#endif /* MAIN_H */
