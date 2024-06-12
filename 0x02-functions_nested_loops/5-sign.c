#include <stdio.h>

/**
 * print_sign - Entry Point
 * @n : parameter
 * Description: a function that
 * checks for lowercase character
 * Return: Always 0.
 */

int print_sign(int n)
{
int x;
	if (n > 0)
	{
		putchar('+');
		x = 1;
	}
	if (n < 0)
	{
		putchar('-');
		x = -1;
	}
	else if (n == 0)
	{
		putchar('0');
		x = 0;
	}
putchar('\n');
return x;
}
