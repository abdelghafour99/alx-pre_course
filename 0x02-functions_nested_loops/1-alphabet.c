#include "main.h"
#include "_putchar.c"

/**
 * print_alphabet - print alphabet
 *
 *
 *
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
