#include "main.h"

/**
 * print_last_digit - the last digit of an integer
 *
 * @n: the one be checked
 * Return: the absolute value of an integer
 */
int print_last_digit(int n)
{
	int b;

	if (n > 0)
	{
		b = n % 10;
	}
	else
	{
		b = ((0 - 1) * n) % 10;
	}
	return (b);

}
