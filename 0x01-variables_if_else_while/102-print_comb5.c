#include <stdio.h>

/**
 * main - Entry Point
 * Description: Prints all single digit numbers of base 10 starting from 0.
 * Return: Always 0.
 */

int main(void)
{

int i;
int j;

i = 0;
while (i <= 98)
{
	j = i + 1;
	while (j <= 99)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		putchar(' ');
		putchar((j / 10) + '0');
		putchar((j % 10) + '0');
		if (i != 98 || j != 99)
		{
			putchar(',');
			putchar(' ');
		}
		j++;
	}
	i++;
}
putchar('\n');
return (0);
}
