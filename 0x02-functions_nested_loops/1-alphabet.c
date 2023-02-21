#include "main.h"


/**
 * print_alphabet - printing the alphabet using function and for loop.
 * Return: 0 (run successfull)
 *
 */

void print_alphabet(void)

{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
