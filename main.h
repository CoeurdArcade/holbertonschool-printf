#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

nt _putchar_buf(char *buf, size_t len);
int printf_binary(va_list val);
int printf_char(va_list val);
int printf_custom_string(va_list val);
int printf_hex(va_list val, int uppercase, int length_modifier, int field_width, int precision, int zero_padding);
int printf_int(va_list val, int length_modifier, int field_width, int precision, int zero_padding, int negative_flag);
int printf_octal(va_list val, int length_modifier, int field_width, int precision, int zero_padding);
int printf_pointer(va_list val);
size_t _strlen(const char *s);
int printf_string(va_list val);
int printf_rot13_string(va_list val);
int _strlenc(const char *str);
int printf_unsigned(va_list val, int length_modifier, int field_width, int precision, int zero_padding);
int _putchar(char c);
int printf_char(va_list args);
int printf_string(va_list args);
int printf_reversed_string(va_list args);
int _printf(const char *format, ...);
int printf_reversed_string(const char *format, ...);
int main();
int _flush_buffer();
void printf_reversed_string(const char *format, const char *str);

#endif /* MAIN_H */
