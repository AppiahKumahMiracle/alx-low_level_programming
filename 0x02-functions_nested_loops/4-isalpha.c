#include "main.h"

/**
 * _isalpha - checking alphabet character in the code.
 * @c: this are the variable am using to check.
 * Return: 1 alphabet character and 0 for all.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
