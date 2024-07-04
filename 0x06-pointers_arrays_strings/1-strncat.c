#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: pointer to diestenation input
 * @src: pointer to source input
 *
 * @n: most nuber of nytes frm @src
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	/*find size of dist array*/
	while (dest[c])
		c++;
	/**
	 * src does not need to be nul terminated
	 * if it contain n or more bytes
	*/

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];

	/*null terminates dest*/
	dest[c + i] = '\0';

	return (dest);
}
