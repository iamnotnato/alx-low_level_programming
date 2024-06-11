#include <stdio.h>

/**
 * main - Entry Point
 * Description: Prints all single digit numbers of base 10 starting from 0.
 * Return: Always 0.
 */

int main(void)
{
int i;

for (i = '0'; i <= '9'; i++)
{
	putchar(i);
	if (i != '9')
	{
	putchar(',');
	putchar(' ');
	}
}
putchar('\n');
return (0);
}
