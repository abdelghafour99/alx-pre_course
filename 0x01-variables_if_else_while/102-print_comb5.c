#include <time.h>
#include <stdio.h>
/**
 * main - Prints all possible combinations of two-two digit
 *        followed by a new line
 *
 * Return: Always 0
*/

int main(void)
{
	int a, b, c, d, c2 = 9, d2 = 9;

	for (a = 0; a <= 98; a++)
	{
		if (a == 0)
		{
			putchar('0');
			putchar('0');
			putchar('0');
			putchar('1');
		}

		for (b = a + 1; b <= 99; b++)
		{
			putchar(',');
			putchar(' ');
			if (a < 10)
				putchar('0');
			putchar(a + '0');
			if (b < 10)
				putchar('0');
			putchar(b + '0');
		}

	}

	putchar('\n');

	return (0);
}
