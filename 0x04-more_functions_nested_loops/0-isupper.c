#include "main.h"

/**
 * _iupper - checks for a digit
 * @c : the caracter checks
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);

}
