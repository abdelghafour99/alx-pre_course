#include "main.h"

/**
 * more_numbers - print numbers 0 to 14
 *
 *
 *
 */
void more_numbers(void)
{
	char a, c;
	int b;

	for (b = 0; b < 10; b++)
	{
		a = '0', c = '0';

		while (a <= '9')
		{
			if (c == '1')
				_putchar(c);
			_putchar(a);
			if (a == '9')
			{
				a = '/', c = '1';
			}
			else if (c == '1' && a == '4')
				break;
			a++;
		}
		_putchar('\n');
	}
}
