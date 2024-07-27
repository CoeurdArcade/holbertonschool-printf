#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * _printf - a function that produces output according to a format
 * @format: initializes the variable arguments list
 * prints the formatted string
 * cleans up the variable arguments list
 *
 * Return: Output result
 */
int _printf(const char *format, ...)
{
    va_list args;
    int result = 0;
    int length_modifier = 0;
    int field_width = 0;
    int precision = 0;
    int zero_padding = 0;
    int negative_flag = 0;

    if (format == NULL)
        return -1;

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == '\0')
                break;

            // Handle field width
            if (*format >= '0' && *format <= '9')
            {
                field_width = 0;
                while (*format >= '0' && *format <= '9')
                {
                    field_width = field_width * 10 + (*format - '0');
                    format++;
                }
            }

            // Handle precision
            if (*format == '.')
            {
                format++;
                precision = 0;
                while (*format >= '0' && *format <= '9')
                {
                    precision = precision * 10 + (*format - '0');
                    format++;
                }
            }

            // Handle zero padding
            if (*format == '0')
            {
                zero_padding = 1;
                format++;
            }

            // Handle negative flag
            if (*format == '-')
            {
                negative_flag = 1;
                format++;
            }

            if (*format == 'c')
            {
                result += printf_char(args);
            }
            else if (*format == 's')
            {
                result += printf_string(args);
            }
            else if (*format == 'd' || *format == 'i')
            {
                result += printf_int(args, length_modifier, field_width, precision, zero_padding, negative_flag);
            }
            else if (*format == 'b')
            {
                result += printf_binary(args);
            }
            else if (*format == 'u')
            {
                result += printf_unsigned(args, length_modifier, field_width, precision, zero_padding);
            }
            else if (*format == 'o')
            {
                result += printf_octal(args, length_modifier, field_width, precision, zero_padding);
            }
            else if (*format == 'x')
            {
                result += printf_hex(args, 0, length_modifier, field_width, precision, zero_padding);
            }
            else if (*format == 'X')
            {
                result += printf_hex(args, 1, length_modifier, field_width, precision, zero_padding);
            }
            else if (*format == 'S')
            {
                result += printf_custom_string(args);
            }
            else if (*format == 'p')
            {
                result += printf_pointer(args);
            }
            else if (*format == 'r')
            {
                result += printf_reversed_string(args);
            }
            else if (*format == 'R')
            {
                result += printf_rot13_string(args);
            }
            else if (*format == '%')
            {
                result += _putchar('%');
            }
            else if (*format == '+')
            {
                // Handle '+' flag (positive sign)
                format++;
                if (*format == 'd' || *format == 'i')
                {
                    result += printf_int(args, length_modifier, field_width, precision, zero_padding, negative_flag);
                }
                else
                {
                    result += _putchar('%');
                    result += _putchar(*format);
                }
            }
            else if (*format == ' ')
            {
                // Handle ' ' flag (space for positive sign)
                format++;
                if (*format == 'd' || *format == 'i')
                {
                    result += printf_int(args, length_modifier, field_width, precision, zero_padding, negative_flag);
                }
                else
                {
                    result += _putchar('%');
                    result += _putchar(*format);
                }
            }
            else if (*format == '#')
            {
                // Handle '#' flag (alternate form)
                format++;
                if (*format == 'x' || *format == 'X')
                {
                    result += printf_hex(args, *format == 'X', length_modifier, field_width, precision, zero_padding);
                }
                else
                {
                    result += _putchar('%');
                    result += _putchar(*format);
                }
            }
            else if (*format == 'l')
            {
                // Handle 'l' length modifier
                length_modifier = 2;
                format++;
                if (*format == 'd' || *format == 'i' || *format == 'u' || *format == 'o' || *format == 'x' || *format == 'X')
                {
                    if (*format == 'd' || *format == 'i')
                        result += printf_int(args, length_modifier, field_width, precision, zero_padding, negative_flag);
                    else if (*format == 'u')
                        result += printf_unsigned(args, length_modifier, field_width, precision, zero_padding);
                    else if (*format == 'o')
                        result += printf_octal(args, length_modifier, field_width, precision, zero_padding);
                    else if (*format == 'x')
                        result += printf_hex(args, 0, length_modifier, field_width, precision, zero_padding);
                    else if (*format == 'X')
                        result += printf_hex(args, 1, length_modifier, field_width, precision, zero_padding);
                }
                else
                {
                    result += _putchar('%');
                    result += _putchar(*format);
                }
            }
            else if (*format == 'h')
            {
                // Handle 'h' length modifier
                length_modifier = 1;
                format++;
                if (*format == 'd' || *format == 'i' || *format == 'u' || *format == 'o' || *format == 'x' || *format == 'X')
                {
                    if (*format == 'd' || *format == 'i')
                        result += printf_int(args, length_modifier, field_width, precision, zero_padding, negative_flag);
                    else if (*format == 'u')
                        result += printf_unsigned(args, length_modifier, field_width, precision, zero_padding);
                    else if (*format == 'o')
                        result += printf_octal(args, length_modifier, field_width, precision, zero_padding);
                    else if (*format == 'x')
                        result += printf_hex(args, 0, length_modifier, field_width, precision, zero_padding);
                    else if (*format == 'X')
                        result += printf_hex(args, 1, length_modifier, field_width, precision, zero_padding);
                }
                else
                {
                    result += _putchar('%');
                    result += _putchar(*format);
                }
            }
            else
            {
                result += _putchar('%');
                result += _putchar(*format);
            }
        }
        else
        {
            result += _putchar(*format);
        }
        format++;
    }

    _flush_buffer();
    va_end(args);

    return result;
}
