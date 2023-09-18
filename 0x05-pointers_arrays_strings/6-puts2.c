#include "main.h"
#include <stdio.h>

/**
 * _puts2 - the length of a string
 *
 * @str: the number check
 */
void _puts2(char *str)
{
	int a = 0;

	while (*str != '\0')
	{
		if (a % 2 == 0)
			putchar(*str++);
		a++;
	}
	putchar('\n');

}
