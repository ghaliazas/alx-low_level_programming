#include "main.h"
#include <stdio.h>

/**
 * is_divisible - Checks if a number is divisible
 * by any number from 2 to sqrt(n).
 * @n: The number to check for divisibility.
 * @divisor: The current divisor to check.
 * Return: 1 if the number is divisible, 0 otherwise.
 */

int is_divisible(int n, int divisor)
{
	if (n % divisor == 0)
		return (1);
	else if (divisor * divisor > n)
		return (0);
	else
		return (is_divisible(n, divisor + 1));
}

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (!is_divisible(n, 2));
}
