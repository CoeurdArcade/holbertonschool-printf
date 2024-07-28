#include <stddef.h>
#include <stdarg.h>
#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: string pointer
 *
 * Return: The length of the string, or negative one (-1) if the input is NULL.
 */

int _strlen(char *str)
{
        int i;

        if (str == NULL)
        {
                return -1;
        }

        for (i = 0; str[i] != '\0'; i++)
        {
                continue;
        }

        return i;
}

/**
 * _strlenc - _strlen function but applied for constant char pointer str.
 * @str: char pointer
 *
 * Return: The length of the string, or negative one (-1) if the input is NULL.
 */

int _strlenc(const char *str)
{
        int i;

        if (str == NULL)
        {
                return -1;
        }

        for (i = 0; str[i] != '\0'; i++)
        {
                continue;
        }

        return i;
}
