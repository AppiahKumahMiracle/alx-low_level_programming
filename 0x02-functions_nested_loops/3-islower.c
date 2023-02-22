#include "main.h"

/**
 * _islower - checking for lower case characters.
 * @c: the character or letters an checking.
 * Return: 1 for lower character and 0 for anything.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
