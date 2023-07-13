#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 * Return: On success, returns a pointer to the
 * newly allocated duplicated string.
 * If str is NULL or if memory allocation fails, returns NULL.
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int len = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}
