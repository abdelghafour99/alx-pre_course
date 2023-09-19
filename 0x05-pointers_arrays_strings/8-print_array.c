#include "main.h"
#include <stdio.h>

/**
 * print_array - the length of a string
 *
 * @a: array
 * @n: number of element
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 1; b < (n - 1); b++)
	{
		printf("%d, ", a[b]);
	}

	if (b == (n - 1))
		printf("%d", a[n - 1]);
	printf("\n");

}
