#include "main.h"

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 * Return: On success, returns a pointer to the newly
 * allocated concatenated string.
 * Returns NULL if ac is 0 or if av is NULL, or if memory allocation fails.
 */

char *argstostr(int ac, char **av)
{
	char *concat;
	int i, j, k, len, total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
		{
			len++;
			total_len++;
		}
		total_len++; /* Account for newline character */
	}

	concat = malloc(sizeof(char) * (total_len + 1));
	if (concat == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
		{
			concat[k++] = av[i][len++];
		}
		concat[k++] = '\n';
	}
	concat[k] = '\0';

	return (concat);
}
