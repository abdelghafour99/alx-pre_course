#include "main.h"
#include <stdio.h>

/**
 * reverse_array - program 1
 *
 *@n: number of elemnt
 *@a: array
 */

void reverse_array(int *a, int n)
{
	int i = 0, j = 0;

	for (i = 0; i < n; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		n--;
	}

}
