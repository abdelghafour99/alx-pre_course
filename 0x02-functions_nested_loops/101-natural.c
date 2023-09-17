#include "main.h"
#include <stdio.h>

/**
 * main - print sum 3 & 5
 *
 *
 * Return: Always 0.
 */
int main(void)
{
	int a, b;

	b = 0;

	for (a = 0; a <= 1024; a++)
	{
		if (a % 3 == 0)
			b = b + a;
		else
		{
			if (a % 5 == 0)
				b = b + a;
		}
	}
	printf("%d", b);
	return (0);
}
