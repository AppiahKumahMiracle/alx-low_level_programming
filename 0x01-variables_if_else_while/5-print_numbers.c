#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main -  print number from 0 to 10.
 * Return: 0 (Run successful).
 *
 */

int main(void)
{
	int countNumber = 0;

	while (countNumber < 10)
	printf("%d", countNumber);
	countNumber++;
	printf("\n");

	return (0);
}
