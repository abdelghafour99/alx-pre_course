#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 *
 *@dest: the first string
 *@src: the second one
 * Return: Always ptr
 */

char *_strcat(char *dest, char *src)
{
	char *ptr;
	int i = 0, j = 0;

	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		ptr[i + j] = s2[j];
		j++;
	}

	return (ptr);
}
