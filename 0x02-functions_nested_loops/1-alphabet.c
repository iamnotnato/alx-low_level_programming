#include <stdio.h>

/**
 * print_alphabet - Entry Point
 * Description: a function that prints the alphabet
 * in lowercase, followed by a new line
 * Return: Always 0.
 */

void print_alphabet(void)
{
int i;
for (i = 'a'; i <= 'z'; i++)
{
	putchar(i);
}
putchar('\n');
}
