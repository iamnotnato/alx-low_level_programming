#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Entry Point
 * @n : parameter
 * Description: a function that
 * prints the last digit of a number.
 * Return: Always 0.
 */

int print_last_digit(int n)
{
int x;

x = n % 10;

printf("%d",x);
putchar('\n');
return (x);
}
