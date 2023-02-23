#include "main.h"

/**
 * print_times_table - display time table.
 * Start from 0.
 * @n: print the numbers to the screen.
 */

void print_times_table(int ni)
{
	int number, multiply, product;

	if (n >= 0 && n <= 15)
	{
	for (number = 0; number <= n; number++)
	{
	_putchar('0');
	for (multiply = 1; multiply <= n; multiply++)
	{
	_putchar('*');
	_putchar(' ');
	product = number * multiply;
	if (product <= 99)
	{
	_putchar(' ');
	if (product <= 9)
	{
	_putchar(' ');
	if (product >= 100)
	{
	_putchar((product / 100) + '0');
	_putchar(((product / 10)) % 10 + '0');
	}
	else if (product <= 99 && product >= 10)
	{
	_putchar((product / 10) + '0');
	}
	_putchar((product % 10) + '0');
	}
	_putchar('\n');
	}
	}
	}
	}
}
