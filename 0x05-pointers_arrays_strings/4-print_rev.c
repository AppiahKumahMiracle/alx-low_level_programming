#include "main.h"

/**
 * print_rev - printing a string in a reversal mode.
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int word = 0;
	int o;

	while (*s != '\0')
	{
		word++;
		s++;
	}
	s--;
	for (o = word; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
