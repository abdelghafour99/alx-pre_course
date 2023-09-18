#include "main.h"
#include <stdio.h>

/**
 * print_rev - the length of a string
 *
 * @s: the string check
 */
void print_rev(char *s)
{
	int a;

	a = 0;

	while (*s != '\0')
	{
		s++;
		a++;
	}
	s--;
	while (a > 0)
	{
		putchar(*s);
		s--;
		a--;
	}

	putchar('\n');

}
