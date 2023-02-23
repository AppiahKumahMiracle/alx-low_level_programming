#include <stdio.h>

/**
 * main -  prints the first 50 Fibonacci numbers, starting with 1 and 2.
 * Return: Nothing
 */

int main(void)
{
	int num = 0;
	long Lnum = 1, Knum = 2;

	while (num < 54)
	{
	if (num == 0)
	{
	printf("%d\n", Lnum);
	}
	else if (num == 1)
	{
	printf(", %d", Knum);
	}
	else
	{
	Knum += Lnum;
	Lnum = Knum - Lnum;
	printf(", %d", Knum);
	}
	num++;
	}
	printf("\n");
	return (0);
}
