#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - printing counting number.
 * Return: 0 (Run successfull)
 *
 */

int main(void)
{
	int num, diff;

	for (num = '0'; num < '9'; num++)
	{
		for (diff = num + 1; diff <= '9'; diff++)
		{
			if (num != diff)
			{
				putchar(num);
				putchar(diff);
				if (num == '8' && diff == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
