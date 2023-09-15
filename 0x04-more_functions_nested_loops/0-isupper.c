#include "main.h"

/**
 * _upper - 1 or 0
 *
 * @c: the one be checked
 * Return: 1 if lowercase or 0 if not
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
