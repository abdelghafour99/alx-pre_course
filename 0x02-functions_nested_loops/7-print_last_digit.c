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

	if (n < 0)
		n = -n;
	b = n % 10;

	if (b < 0)
		b = -b;

	_putchar(b + '0');
	return (b);

}
