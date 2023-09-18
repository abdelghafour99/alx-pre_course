#include "main.h"
#include <stdio.h>

/**
 * rev_string- the length of a string
 *
 * @s: the string check
 */
void rev_string(char *s)
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


}
