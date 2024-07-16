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

	if (n < 0 || n > 15)
	{
	return;
	}
	for (i = 0; i <= 10; ++i)
	{
		printf("%d * %d = %d\n", n, i, n * i);
	}
}
