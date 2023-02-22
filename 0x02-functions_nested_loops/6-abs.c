#include "main.h"

/**
 * _abs -  computes the absolute value of an integer.
 * @c: the number.
 * Return: through 1 and 0.
 */

int _abs(int c)
{

	if (c < 0)
	{
	int abs_home;

	abs_home = c * -1;
	return (abs_home);
	}
	return (c);
}
