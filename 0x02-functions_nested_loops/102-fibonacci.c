#include <stdio.h>

/**
 * main -  prints the first 50 Fibonacci numbers, starting with 1 and 2.
 * Return: Nothing
 */

int main(void)
{
	int num = 0;
	long Lnum = 1, Knum = 2;

	while (num < 50)
	{
	if (num == 0)
	printf("%ld\n", Lnum);
	else if (num == 1)
	printf(",%ld", Knum);
	else
	{
	Knum += Lnum;
	Lnum = Knum - Lnum;
	printf(",%ld", Knum);
	}
	++num;
	}
	printf("\n");
	return (0);
}
