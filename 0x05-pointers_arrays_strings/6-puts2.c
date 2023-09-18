#include "main.h"
#include <stdio.h>

/**
 * _puts2 - the length of a string
 *
 * @str: the number check
 */
void _puts2(char *str)
{
	int a = 0, n;
	char *s = str;

	while (*s != '\0')
	{
		s++;
		a++;
	}
	a--;
	for (n = 0; n <= a; n++)
	{
		if (n % 2 == 0)
			putchar(str[n]);
	}
	putchar('\n');

}
