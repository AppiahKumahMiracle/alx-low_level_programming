#include <stdio.h>

/**
 * main - print the sum.
 * Return: Run successfull
 */
int main(void)
{
	int w, s = 0;

	while (w < 1024)
	{
	if ((w % 3 == 0) || (w % 5 == 0))
	{
	s += w;
	}
	w++;
	}
	printf("%d\n", s);
	return (0);
}
