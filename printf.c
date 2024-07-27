#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}

/**
 * printf_char - prints a character
 * @args: the va_list containing the character to print
 *
 * Return: the number of characters printed
 */
int printf_char(va_list args)
{
    char c = va_arg(args, int);
    return (_putchar(c));
}

/**
 * printf_string - prints a string
 * @args: the va_list containing the string to print
 *
 * Return: the number of characters printed
 */
int printf_string(va_list args)
{
    char *str = va_arg(args, char *);
    int count = 0;

    if (str == NULL)
        str = "(null)";

    while (*str)
    {
        _putchar(*str);
        str++;
        count++;
    }

    return (count);
}

/**
 * printf_reversed_string - prints a reversed string
 * @args: the va_list containing the string to print
 *
 * Return: the number of characters printed
 */
int printf_reversed_string(va_list args)
{
    char *str = va_arg(args, char *);
    int length = 0;
    int count = 0;

    if (str == NULL)
        str = "(null)";

    while (str[length] != '\0')
        length++;

    for (length--; length >= 0; length--)
    {
        _putchar(str[length]);
        count++;
    }

    return (count);
}

/**
 * _printf - produces output according to a format
 * @format: a character string
 *
 * Return: the number of characters printed (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == '\0')
                break;

            if (*format == 'c')
                count += printf_char(args);
            else if (*format == 's')
                count += printf_string(args);
            else if (*format == 'r')
                count += printf_reversed_string(args);
            else
            {
                _putchar('%');
                _putchar(*format);
                count += 2;
            }
        }
        else
        {
            _putchar(*format);
            count++;
        }
        format++;
    }

    va_end(args);

    return (count);
}

