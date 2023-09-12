#include "main.h"
#include "_putchar.c"

/**
 * main - print _alphabet
 *
 * Return: Always 0.
 */
void print_alphabet(void);
{
	for (a = "a", a <= "z", a++)
	{
		putchar(a);
		putchar('\n');
	}
	return (0);
}
