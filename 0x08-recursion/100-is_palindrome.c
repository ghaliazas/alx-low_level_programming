#include "main.h"
#include <stdio.h>

/**
 * _strlen - Calculates the length of a string.
 * @s: The string to calculate the length of.
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * check_palindrome - Recursive helper function
 * to check if a string is a palindrome.
 * @s: The string to check.
 * @start: The starting index of the current substring.
 * @end: The ending index of the current substring.
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */

int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (len <= 1)
		return (1);
	if (*s != s[len - 1])
		return (0);
	s[len - 1] = '\0';
	return (is_palindrome(s + 1));
}
