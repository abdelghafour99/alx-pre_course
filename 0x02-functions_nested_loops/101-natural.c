#include "main.h"
#include <stdio.h>

/**
 * print_sum_3_5 - print sum 3 & 5
 *
 *
 */
void print_sum_3_5(void)
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
}
