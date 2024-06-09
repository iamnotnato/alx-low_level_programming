#include <stdio.h>
/**
 * main - Entry Point
 * Description: Prints all single digit numbers of base 10 starting from 0.
 * Return: Always 0.
 */
int main(void)
{
int i;
for (i = 1; i <= 15; i++)
{
	if (i < 10)
	{
		putchar('0' + i);
	}
	else
	{
	putchar('a' + (i - 10));
	}
}
putchar('\n');
return (0);
}
