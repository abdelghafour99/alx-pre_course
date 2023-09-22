#include "main.h"
#include <stdio.h>

/**
 * _strcmp - concatenates two strings
 *
 *@s1: the first string
 *@s2: the second one
 * Return: Always s1[a] - s2[a]
 */

int _strcmp(char *s1, char *s2)
{

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
	}

	return (0);
}
