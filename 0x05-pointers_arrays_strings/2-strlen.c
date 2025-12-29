#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to measure
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
    int length = 0;

    /* Loop until the null terminator '\0' is found */
    while (s[length] != '\0')
    {
        length++;
    }

    return (length);
}
