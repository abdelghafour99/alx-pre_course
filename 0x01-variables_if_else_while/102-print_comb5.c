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
	int a, b, c, d, c2 = 1, d2 = 1, f = 0;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = a; c <= 9; c++)
			{
				d = 0;
				while (d <= 9)
				{
					if (d2 == 1)
					{
						d = d + c2;
						d2 = 0;
					}
					putchar((a % 10) + '0');
					putchar((b % 10) + '0');
					putchar(' ');
					putchar((c % 10) + '0');
					putchar((d % 10) + '0');
					putchar(',');
					putchar(' ');
					d++;
				}
			}
			c2++;
			d2 = 1;
		}
	}

	putchar('\n');
	return (0);
}
