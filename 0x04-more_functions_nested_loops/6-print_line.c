#include "main.h"

/**
 * print_line - print numbers 0 to 9
 *
 *
 *
 */
void print_line(int n)
{
	char a = '_';
	int b;

	if (n > 0)
	{
		for (b = 0; b <= n; b++)
		{
			_putchar(b);
		}
	}
	_putchar('\n');
}
