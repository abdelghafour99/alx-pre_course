#include "main.h"
#include <stdio.h>

/**
 * puts2 - the length of a string
 *
 * @str: the number check
 */
void puts2(char *str)
{
	int a = 0, n;

	while (str[a] != '\0')
	{
		a++;
	}

	for (n = 0; n <= a; n += 2)
	{
		putchar(str[n]);
	}

	putchar('\n');

}
