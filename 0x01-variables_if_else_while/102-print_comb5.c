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
	int a, b, c, d, c2 = 1, d2 = 1;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = a; c <= 9; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					if (d == 0 && d2 == 1)
					{
						d = d + c2;
					}
					putchar((a % 10) + '0');
					putchar((b % 10) + '0');
					putchar(' ');
					putchar((c % 10) + '0');
					putchar((d % 10) + '0');
					putchar(',');
					putchar(' ');
					if (a == 9 && b == 8 && c == 9 && d == 9)
						break;
				}
				d2 = 0;
			}
			c2++;
			d2 = 1;
		}
	}

	putchar('\n');
	return (0);
}
