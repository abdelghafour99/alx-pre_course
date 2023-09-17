#include "main.h"

/**
 * print_diagonal - print diagonal
 *
 *
 *@n: the numberof diagonal
 */
void print_diagonal(int n)
{
	char a = '\';

	int b;

	n = n + 1;

	if (n > 1)
	{
		for (b = 1; b < n; b++)
		{
			_putchar(' ');
		}
		_putchar(a);
	}
	_putchar('\n');
}
