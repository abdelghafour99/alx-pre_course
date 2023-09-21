#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 *
 *@dest: the first string
 *@src: the second one
 *@n: src lenght 
 * Return: Always ptr
 */

char *_strncat(char *dest, char *src, int n)
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
