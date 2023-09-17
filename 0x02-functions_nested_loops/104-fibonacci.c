#include "main.h"
#include <stdio.h>

/**
 * main - 98-fibonacci
 *
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;
	long int b1, b2, b3;

	b1 = 1;
	b2 = 1;

	printf("%ld", b2);

	for (a = 1; a < 99; a++)
	{
		b3 = b1;
		b1 = b2;
		b2 = b1 + b3;
		printf(", ");
		printf("%ld", b2);
	}
	printf("\n");
	return (0);
}
