#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
* Description : A program that assign a random number
* to the variable n each time it is executed
* Return: Always 0 (Success)
*/

int main(void)
{
	int n;
	int last_digit;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("%s %d is %d and is greater than 5\n", str, n, last_digit);
	}
	if (last_digit == 0)
	{
		printf("%s %d is 0 and is 0\n", str, n);
	}
	else if (last_digit < 6)
	{
	printf("%s %d is %d and is less than 6 and not 0\n", str, n, last_digit);
	}
	return (0);
}
