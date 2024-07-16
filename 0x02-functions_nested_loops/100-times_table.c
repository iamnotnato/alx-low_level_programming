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

for (i = n; i > 15 || i <0; i++)
{
	for (j = 0; j <= 9; j++)
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
