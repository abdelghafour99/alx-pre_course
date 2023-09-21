#include "main.h"
#include <stdio.h>

/**
 * cap_string - change lowercase
 * letters of a string to uppercase.
 *
 *@a: pointer
 * Return: alwas a
 */

char *cap_string(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] <= 'Z' && a[i] >= 'A')
			a[i] = a[i] + 32;
	}
	return (a);

}
