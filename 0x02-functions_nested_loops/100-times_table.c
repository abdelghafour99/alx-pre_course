#include "main.h"
#include <stdio.h>

/**
 * print_times_table - print n times table
 *
 * @n: the one be checked
 *
 */
void print_times_table(int n)
{
	int a, b;

	if (n <= 15 && n >= 0)
	{
		for (a = 0 ; a <= n ; a++)
		{
			for (b = 0; b <= n; b++)
			{
				if (b == 0)
					printf("0");
				else
				{
					printf(", ");
					printf("%d", a * b);
				}
			}
			printf("\n");
		}
	}

}
