#include "main.h"

/**
 * _isuppeg - checksfor uppercase
 * @c : the caracter checks
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);

}
