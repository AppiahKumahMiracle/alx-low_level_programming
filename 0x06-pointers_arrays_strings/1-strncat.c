#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest (Run successful)
 */

char *_strncat(char *dest, char *src, int n)
{
	int num1, num2;

	num1 = 0;
	while (dest[num1] != '\0')
	{
		num1++;
	}
	num2 = 0;
	while (num2 < n && src[num2] != '\0')
	{
	dest[num1] = src[num2];
	num1++;
	num2++;
	}
	dest[num1] = '\0';
	return (dest);
}
