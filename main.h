#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list val);
int printf_string(va_list val);
int printf_int(va_list val, int length_modifier, int field_width, int precision, int zero_padding, int negative_flag);
int printf_binary(va_list val);
int printf_unsigned(va_list val, int length_modifier, int field_width, int precision, int zero_padding);
int printf_octal(va_list val, int length_modifier, int field_width, int precision, int zero_padding);
int printf_hex(va_list val, int uppercase, int length_modifier, int field_width, int precision, int zero_padding);
int printf_custom_string(va_list val);
int printf_pointer(va_list val);
int printf_rot13_string(va_list val);
size_t _strlen(const char *s);
int printf_reversed_string(const char *format, ...);

#endif /* MAIN_H */
