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

	while (*(src + 1) != '\0')
	{
		a++;
	}
	a--;
	for (n = 0; n < a; n++)
	{
		dest[n] = src[n];
	}
	dest[a] = '\0';

	return (dest);

}
