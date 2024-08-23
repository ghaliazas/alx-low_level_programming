#include "main.h"
#include <stdio.h>
/**
 * _strchr - Locates the first occurrence of a character in a string
 * @s: Pointer to the string
 * @c: Character to be located
 * Return: Pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
