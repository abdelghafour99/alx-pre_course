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
	int a, b1, b2, b3;

	b1 = 0;
	b2 = 1;

	for (a = 0; a <= 50; a++)
	{
		b3 = b1;
		b1 = b2;
		b2 = b1 + b3;
		printf("%d, ", b2);
	}
	printf("\n");
	return (0);
}
