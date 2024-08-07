#include "main.h"

/**
 * *create_array - creates an array of chars
 * and point it out with specific char
 * @size: size of array
 * @c: char to be intialized
 * Return: pointer to the array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *i = malloc(size);

	if (size == 0 || i == 0)
		return (0);
	while (size--)
		i[size] = c;

	return (i);
}
