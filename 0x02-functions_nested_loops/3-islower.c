#include "main.h"

/**
 * _islower - 1 or 0
 *
 *
 * Return 1 if lowercase
 * Return 0 if not
 */
int _islower(int c)
{
	char c;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
