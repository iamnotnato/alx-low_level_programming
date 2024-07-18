#include "main.h"
#include <stdio.h>
/**
* print_natural_numbers - program that computes and prints
* the sum of all the multiples of 3 or 5 below 1024
* @void: The number in question.
*
* Return: void
*/
void print_natural_numbers();

int main(void)
{
int x = 10;
print_natural_numbers(x);
putchar('\n');
return (0);
}


void print_natural_numbers(int n)
{
int k = 5;
int m = 3;
int i;

for (i = 0; i <= n; i++)
{
	/**if (n % m == 0)
	{
*/
putchar(i);
printf("%d , i");
/*	}

*/
}
}
