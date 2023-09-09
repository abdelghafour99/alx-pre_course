#include <time.h>
#include <stdio.h>
/**
 * main - Prints all possible combinations of tow digit
 *        followed by a new line
 *
 * Return: Always 0
*/

int main(void)
{
	int a, b, c;

	for (a = 0; a < 8; a++)
	{
		b = a + 1;
		while (b < 9)
		{
			c = b + 1;
			while (c <= 9)
			{
				putchar((a % 10) + '0');
				putchar((b % 10) + '0');
				putchar((c % 10) + '0');
				if (a == 7 && b == 8 && c == 9)
					continue;
				c++;
				putchar(',');
				putchar(' ');

			}
			b++;
		}

	}

	putchar('\n');

	return (0);
}
