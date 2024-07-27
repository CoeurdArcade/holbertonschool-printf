#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * printf_reversed_string - Prints a reversed string with a specified format.
 * @format: The format string to be used for printing.
 * @str: The string to be reversed and printed.
 *
 * Description: This function takes a string and prints it in reverse order
 *              using the specified format.
 */

void printf_reversed_string(const char *format, const char *str) {
	int len = strlen(str);
	char *reversed = (char *)malloc(len + 1);
	if (reversed == NULL) {
		fprintf(stderr, "Memory allocation failed\n");
		return;
	}

	int i;
	for (i = 0; i < len; i++) {
		reversed[i] = str[len - 1 - i];
	}
	reversed[len] = '\0';

	printf(format, reversed);

	free(reversed);
}
