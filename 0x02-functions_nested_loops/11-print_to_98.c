#include "main.h"
#include <stdio.h>
/**
* print_to_98 - prints all natural numbers
* from n to 98, followed by a new line.
* starting with 0.
* @n: The number in question.
*
* Return: void
*/

void print_to_98(int n)
{
int i;

for (i = n; i <= 98; i++)
{
	printf("%d", i);
	putchar(',');
	putchar(' ');
}
printf("\n");
printf("%d", 98);
printf("\n");
}
