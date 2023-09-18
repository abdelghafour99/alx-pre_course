#include "main.h"

/**
 * swap_int - the last digit of an integer
 *
 * @a: the first number
 * @b: the second number
 */
void swap_int(int *a, int *b)
{
	int c

	c = *a;
	*a = *b;
	*b = c;
}
