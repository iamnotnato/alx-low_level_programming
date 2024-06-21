#include "main.h"
#include <stdio.h>
/**
* times_table - prints the 9 times table,
* starting with 0.
* @void: The number in question.
*
* Return: void
*/

void times_table(void)
{
int i;
int j;

for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	if (j != 9)
	{
	printf("%d", i * j);
	putchar(',');
	putchar(' ');
	}
	else
	{
	printf("%d", i * j);
	}
	}
	printf("\n");
	}
}
