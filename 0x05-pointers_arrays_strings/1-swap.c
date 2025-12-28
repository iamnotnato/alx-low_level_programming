#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: int
 * @b: int
 */


void swap_int(int *a, int *b)
{
    int c;

    c = *a;      /* Save the value at address a into c */
    *a = *b;     /* Save the value at address b into address a */
    *b = c;      /* Save the value of c into address b */
}
