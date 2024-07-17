#include "main.h"
#include <stdio.h>
/**
* print_times_table - prints the n times table, starting with 0
* starting with 0.
* @n: The number in question.
*
* Return: void
*/

void print_times_table(int n)
{
int i;
int j;


if (n > 15 || n < 0)
{
return;
}
else
{
for (i = 0; i <= n; i++)
{
	for (j = 0; j <= n; j++)
	{
		if (j != 9)
		{
		printf("%2d, ", i * j);
		}
		else
		{
		printf("%2d", i * j);
		}
	}
	printf("\n");
	}
}
}
