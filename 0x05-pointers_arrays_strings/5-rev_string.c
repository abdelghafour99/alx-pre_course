#include "main.h"
#include <stdio.h>

/**
 * rev_string- the length of a string
 *
 * @s: the string check
 */
void rev_string(char *s)
{
	int a, b;
	char REV = s[0];

	a = 0;

	while (*s != '\0')
	{
		s++;
		a++;
	}
	s--;
	for (b = 0; b < a; b++)
	{
		a--;
		rev = s[b];
		s[b] = s[a];
		s[a] = rev;
	}


}
