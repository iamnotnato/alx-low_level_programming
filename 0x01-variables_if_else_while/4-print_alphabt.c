#include <stdio.h>
/**
 * main -Entry Point
 * Description : Prints the alphabet in lowercase, except for q and e.
 * Return: Always 0.
 */
int main(void)
{
int i;
for (i = 'a'; i <= 'z'; i++)
{
	if (i == 'q' || i == 'e')
	{
		continue;
	}
	else
	{
		putchar(i);
	}

}
putchar('\n');
return (0);
}
