#include "main.h"

/**
 * _putchar - Writes the character c to stdout.
 * @c: The character to print.
 *
 * Return: On success, returns 1.
 * On error, returns -1 and sets errno appropriately.
 */

int _putchar(char c)
{
    if (write(1, &c, 1) < 0) {
        perror("Error writing to stdout");
        return -1;
    }

    return 1;
}
