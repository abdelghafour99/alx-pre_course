#include "main.h"

/**
 * times_table - 9times table
 *
 *
 *
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (b == 0)
				_putchar(b + '0');
			if ((a * b) > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(((a * b) / 10) + '0');
				_putchar(((a * b) % 10) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((a * b) + '0');
			}

		}
		_putchar('\n');
	}
}
