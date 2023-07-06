#include "main.h"
#include <stdio.h>

/**
 * sqrt_recursive - Recursive helper function
 * to compute the square root.
 * @n: The number to compute the square root of.
 * @start: The starting point for the search.
 * @end: The ending point for the search.
 *
 * Return: The natural square root of the number.
 */

int sqrt_recursive(int n, int start, int end)
{
if (start > end)
	return (-1);

int mid = (start + end) / 2;
int square = mid * mid;

if (square == n)
	return (mid);
else if (square > n)
	return (sqrt_recursive(n, start, mid - 1));
else
	return (sqrt_recursive(n, mid + 1, end));
}

/**
 * _sqrt_recursion - Computes the natural square root of a number.
 * @n: The number to compute the square root of.
 *
 * Return: The natural square root of the number.
 * If the number does not have
 * a natural square root, returns -1.
 */

int _sqrt_recursion(int n)
{
if (n < 0)
	return (-1);
else
	return (sqrt_recursive(n, 0, n));
}
