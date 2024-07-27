#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * printf_octal - prints an unsigned integer in octal format
 * @val: the va_list containing the unsigned integer to print
 * @length_modifier: the length modifier (0 for none, 1 for 'h', 2 for 'l')
 * @field_width: the field width
 * @precision: the precision
 * @zero_padding: flag to pad with zeros
 *
 * Return: the number of characters printed, or -1 on error
 */
int printf_octal(va_list val, int length_modifier, int field_width, int precision, int zero_padding)
{
    unsigned long int num;
    int count = 0;
    unsigned long int temp;

    if (length_modifier == 1)
        num = (unsigned short)va_arg(val, unsigned int);
    else if (length_modifier == 2)
        num = va_arg(val, unsigned long int);
    else
        num = va_arg(val, unsigned int);

    if (num == 0)
    {
        if (_putchar('0') == -1)
            return -1;
        count++;
        return count;
    }

    temp = num;
    while (temp > 0)
    {
        temp /= 8;
        count++;
    }

    char buffer[count];
    int i = count - 1;

    while (num > 0)
    {
        buffer[i--] = (num % 8) + '0';
        num /= 8;
    }

    // Handle field width
    if (field_width > count)
    {
        for (int j = 0; j < field_width - count; j++)
        {
            if (_putchar(zero_padding ? '0' : ' ') == -1)
                return -1;
        }
    }

    // Handle precision
    if (precision > count)
    {
        for (int j = 0; j < precision - count; j++)
        {
            if (_putchar('0') == -1)
                return -1;
        }
    }

    for (i = 0; i < count; i++)
    {
        if (_putchar(buffer[i]) == -1)
            return -1;
    }

    return count;
}