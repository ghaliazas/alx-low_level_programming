#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to measure the length of.
 *
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s > '\0')
	{
		n += _strlen_recursion(s + 1) + 1;
	}

	return (n);
}
