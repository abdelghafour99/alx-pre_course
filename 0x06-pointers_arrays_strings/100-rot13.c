#include "main.h"
#include <stdio.h>

/**
 * rot13 - change lowercase
 * letters of a string to uppercase.
 *
 *@a: pointer
 * Return: alwas a
 */

char *rot13(char *a)
{
	int i, j;
	char I[] = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j <= 24; j++)
		{
			if (a[i] == I[j])
			{
				a[i] = I[j + 13];
				continue;
			}
		}
	}
	return (a);
}
