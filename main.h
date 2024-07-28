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

/* Function prototypes */

int is_string(const char *str);
int printf_string(va_list val);
size_t size_t_strlen(const char *s);
int _putchar(int c);
void printf_reversed_string(const char *format, const char *str);
int _printf(const char *format, ...);
int _string(va_list val, int flag);
int _int(va_list val, int flag);
int _char(va_list val, int flag);
int _binary(va_list val, int flag);
char *itoa(int i);
char *reverse(char *str);
char *convert_binary(int num);
int _strlen(char *str);
int _strlenc(const char *str);
int print_37(void);

#endif /* MAIN_H */
