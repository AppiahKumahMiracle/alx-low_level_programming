#include "main.h"

/**
 * print_sign - prints the sign in number.
 * @n: number to check
 * Return: 1 as positive number, -1 as negative and 0 as anything.
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
