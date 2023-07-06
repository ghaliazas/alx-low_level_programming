#include "main.h"
#include <stdio.h>

/**
 * move_past_star - Moves past the wildcard
 * character '*' in the second string.
 * @s2: The second string.
 * Return: Pointer to the position past the wildcard character.
 */

char *move_past_star(char *s2)
{
	if (*s2 == '*')
		return (move_past_star(s2 + 1));
	else
		return (s2);
}

/**
 * inception - Checks if the first string matches the pattern
 * of the second string.
 * @s1: The first string.
 * @s2: The second string, can contain wildcard character '*'.
 * Return: 1 if the strings match, 0 otherwise.
 */

int inception(char *s1, char *s2)
{
	int ret = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		ret += wildcmp(s1 + 1, s2 + 1);
	ret += inception(s1 + 1, s2);
	return (ret);
}

/**
 * wildcmp - Compares two strings lexicographically
 * with wildcard support.
 * @s1: The first string.
 * @s2: The second string, can contain wildcard character '*'.
 * Return: 1 if the strings match, 0 otherwise.
 */

int wildcmp(char *s1, char *s2)
{
	int ret = 0;

	if (!*s1 && *s2 == '*' && !*move_past_star(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = move_past_star(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			ret += wildcmp(s1 + 1, s2 + 1);
		ret += inception(s1, s2);
		return (!!ret);
	}
	return (0);
}
