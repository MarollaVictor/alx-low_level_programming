#include "main.h"

/**
 * _memcpy - function copies @n bytes from memory area @src
 *	to memory area dest
 *
 * @dest: memory area
 * @src: source
 * @n: length of src to be copied
 *
 * Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < n; itr++)
	{
		dest[itr] = src[itr];
	}

	return (dest);
}
