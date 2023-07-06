#include "main.h"
#include <stdio.h>

/**
 * square - Find square root recursively.
 * @n: The number to find the square root of.
 * @val: The current value to check for the square root.
 * (Incremented in each recursive call)
 * Return: The square root of the number if it exists, -1 otherwise.
 */

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - Computes the natural square root of a number.
 * @n: The number to compute the square root of.
 * Return: The natural square root of the number.
 * If the number does not have
 * a natural square root, returns -1.
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
