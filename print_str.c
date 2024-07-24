#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: string pointer
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
        ;

    return (i);
}

/**
 * _strlenc - _strlen function but applied for constant char pointer str.
 * @str: char pointer
 *
 * Return: The length of the string.
 */
int _strlenc(const char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
        ;

    return (i);
}

