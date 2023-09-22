#include "main.h"
#include <stdio.h>

/**
 * print_number - program 1
 *
 *@n: number of elemnt
 */

void print_number(int n)
{
	int *a[10];
	int i = 0, b = 0;

	while (n / 10 > 1)
	{
		a[b] = n % 10;
		n /= 10;
		b++;
	}
	a[b] = n;

	for (i = b; i >= 0; i--)
	{
		putchar(a[i] + '0');
	}

}
