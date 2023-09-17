#include "main.h"
#include <stdio.h>

/**
 * main - 50-fibonacci
 *
 *
 * Return: Always 0.
 */
int main(void)
{
	long int a, b1, b2, b3;

	a = 0;
	b1 = 0;
	b2 = 1;

	while (b2 < 4000000)
	{
		b3 = b1;
		b1 = b2;
		b2 = b1 + b3;
		if (b2 % 2 == 0)
			a = a + b2;
	}
	printf("%ld", a);
	printf("\n");
	return (0);
}
