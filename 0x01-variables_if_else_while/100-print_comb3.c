#include <stdio.h>
/**
 * main - Entry Point
 * Description: all possible different
 * combinations of two digits.
 * Return: Always 0.
 */

int main(void)
{
int i, j;

i = '0';
while (i <= '9')
{
	j = i + 1;
	while (j <= '9')
	{
		putchar(i);
		putchar(j);
		if (i != '8' || j != '9')
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
