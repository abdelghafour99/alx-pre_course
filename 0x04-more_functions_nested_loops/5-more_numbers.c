#include "main.h"

/**
 * more_numbers - print numbers 0 to 14
 *
 *
 *
 */
void more_numbers(void)
{
	char a;
	int b;

	for (b = 0; b < 10; b++)
	{
		for (a = '0'; a <= '9'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
