#include <stdio.h>
/**
* main - Print program
*
* Return: Always 0
*/
int main(void)
{
	printf("Siz_int: %d byte(s)\n", sizeof(int));
	printf("Size_long int: %d byte(s)\n", sizeof(long int));
	printf("Size_long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size_char: %d byte(s)\n", sizeof(char));
	printf("Size_float: %d byte(s)\n", sizeof(float));
	return (0);
}
