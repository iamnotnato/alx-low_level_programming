#include "main.h"

/**
 * print_rev - prints a string, in reverse followed by a new line.
 * @s: string to print
 */

void print_rev(char *s)
{
        int length = 0;
        int i;

        /* 1. Find the length of the string first */
        while (s[length] != '\0')
        {
                length++;
        }

        /* 2. Print from the last character back to the first */
        for (i = length - 1; i >= 0; i--)
        {
                _putchar(s[i]);
        }

        _putchar('\n');
}
