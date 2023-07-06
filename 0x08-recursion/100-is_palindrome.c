#include "main.h"
#include <stdio.h>

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
	else if (s[start] != s[end])
		return (0);
	else
		return (check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (check_palindrome(s, 0, len - 1));
}
