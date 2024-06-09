#include <stdio.h>

/**
 * main - Entry Point
 * Description: Prints all single digit numbers of base 10 starting from 0.
 * Return: Always 0.
 */

int main(void)
{

int i;
int j;
int k;

i = '0';
while (i <= '7')
  {
    j = i + 1;
    while (j <= '8')
    {
      k = j + 1;
      while (k <= '9')
      {
        putchar(i);
        putchar(j);
        putchar(k);
        if (i != '7' || j != '8' || k != '9')
        {
          putchar(',');
          putchar(' ');
        }
        k++;
      }
      j++;
    }
    i++;
  }
putchar('\n');
return (0);
}
