#include "main.h"

/**
 * print_to_98 - print to 98
 *
 * @n: the one be checked
 *
 */
void print_to_98(int n)
{
	int a;

	if (n > 98)
	{
		for (a = n; a <= 98; a--)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (a = n; a <= 98; a--)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');

}
