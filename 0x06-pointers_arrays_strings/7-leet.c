#include "main.h"
#include <stdio.h>

/**
 * leet - change lowercase
 * letters of a string to uppercase.
 *
 *@a: pointer
 * Return: alwas a
 */

char *leet(char *a)
{
	int i, j;
	char I[] = "aAeEoOtTlL";
	char J[] = "4433007711";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[i] == I[j])
				a[i] = J[j];
		}
	}
	return (a);
}
