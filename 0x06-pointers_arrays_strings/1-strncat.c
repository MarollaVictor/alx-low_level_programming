#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number of bytes from @src
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;
	/*find the size of dest array*/
	while (dest[c])
		c++;

	/**
	 * src does not need to be null terminates
	 * if it conatins n or more bytes
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
		des[c + i] = src[i];
	/*null terminate dest*/

	dest[c + i] = '\0';

	return (dest);
}
