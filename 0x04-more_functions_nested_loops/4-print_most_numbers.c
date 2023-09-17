#include "main.h"
#include "_putchar.c"
#include <stdio.h>

/**
 * print_most_numbers - print numbers 0 to 9
 *
 *
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a != 2 && a != 4)
			putchar(a + '0');
	}
	putchar('\n');

}
