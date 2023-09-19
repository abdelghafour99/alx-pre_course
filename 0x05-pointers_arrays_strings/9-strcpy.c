#include "main.h"
#include <stdio.h>

/**
 * *_strcpy- the length of a string
 *
 * @src: the first string
 * @dest: the second string
 * Return: String
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0, n;

	while (src[0] != '\0')
	{
		a++;
	}

	for (n = 0; n < a; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';

	return (dest);

}
