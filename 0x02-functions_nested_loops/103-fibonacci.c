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
	long int b1, b2, b3;

	b1 = 0;
	b2 = 1;

	while (b2 < 4000000)
	{
		b3 = b1;
		b1 = b2;
		b2 = b1 + b3;
		if (b2 % 2 == 0)
			printf("%ld, ", b2);
	}
	printf("\n");
	return (0);
}
