#include <stdarg.h>
#include <string.h>
#include "main.h"

/**
 * printf_custom_string - prints a string with non-printable characters as \x followed by hex value
 * @val: the va_list containing the string to print
 *
 * Return: the length of the string, or -1 on error
 */
int printf_custom_string(va_list val)
{
    char *str;
    size_t length;
    int count = 0;

    str = va_arg(val, char *);
    if (str == NULL)
    {
        str = "(null)";
    }

    length = _strlen(str);
    for (size_t i = 0; i < length; i++)
    {
        if (str[i] < 32 || str[i] >= 127)
        {
            if (_putchar('\\') == -1)
                return -1;
            if (_putchar('x') == -1)
                return -1;
            if (_putchar((str[i] >> 4) + ((str[i] >> 4 > 9) ? 'a' - 10 : '0')) == -1)
                return -1;
            if (_putchar((str[i] & 0xF) + ((str[i] & 0xF > 9) ? 'a' - 10 : '0')) == -1)
                return -1;
            count += 4;
        }
        else
        {
            if (_putchar(str[i]) == -1)
                return -1;
            count++;
        }
    }
    return count;
}
