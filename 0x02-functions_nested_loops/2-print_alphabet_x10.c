#include <stdio.h>

/**
 * print_alphabet - Entry Point
 * Description: a function that prints the alphabet
 * 10 times the alphabet, in lowercase
 * followed by a new line.
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
int i,j;

for (j = 0; j < 10; j++)
{
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
}
