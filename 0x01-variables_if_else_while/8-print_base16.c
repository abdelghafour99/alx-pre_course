#include <time.h>
#include <stdio.h>
/**
 * main - Prints numbers
 *        followed by a new line
 *
 * Return: Always 0
*/

int main(void)
{
	int a;
	char b;

	for (a = 0; a <= 9; a++)
		putchar((a % 10) + '0');

	for (b = 'a'; a <= 'f'; a++)
		putchar(b);

	putchar('\n');

	return (0);
}
