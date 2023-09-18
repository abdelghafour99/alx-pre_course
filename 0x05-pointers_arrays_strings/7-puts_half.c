#include "main.h"
#include <stdio.h>

/**
 * puts_half - the length of a string
 *
 * @str: the number check
 */
void puts_half(char *str)
{
	int a = 0, n;
	char *s = str;

	while (*s != '\0')
	{
		s++;
		a++;
	}
	a = a / 2;

	for (n = 0; n <= a; n++)
	{
		putchar(str[n]);
	}

	putchar('\n');

}
