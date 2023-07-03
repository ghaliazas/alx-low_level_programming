#include "main.h"
#include <stdio.h>
/**
 * _strstr - Locates a substring within a string.
 * @haystack: The string to search in.
 * @needle: The substring to find.
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *start, *pattern;

	while (*haystack != '\0')
	{
		start = haystack;
		pattern = needle;
		while (*haystack == *pattern && *pattern != '\0')
		{
			haystack++;
			pattern++;
		}
		if (*pattern == '\0')
			return (start);
		haystack = start + 1;
	}
	return (NULL);
}
