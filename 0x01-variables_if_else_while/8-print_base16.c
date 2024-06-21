#include <stdio.h>
/**
 * main - Entry Point
 * Description: prints all the numbers of base 16
 * in lowercase, followed by a new line.
 * Return: Always 0.
 */
int main(void)
{
int i;
for (i = 0; i <= 15; i++)
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
