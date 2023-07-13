#include "main.h"

/**
 * create_array - Creates an array of chars
 * and initializes it with a specific char.
 * @size: The size of the array.
 * @c: The character used to initialize each element of the array.
 * Return: On success, returns a pointer to the created array.
 *         If size is 0 or if the allocation fails, returns NULL.
 */

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;
	return (n);
}
