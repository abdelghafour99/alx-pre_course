#include "main.h"
#include <stdio.h>

/**
 * string_toupper - change lowercase
 * letters of a string to uppercase.
 *
 *@a: pointer
 * Return: alwas a
 */

char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] <= 'z' && a[i] >= 'a')
			a[i] = a[i] - 32;
	}
	return (a);

}
