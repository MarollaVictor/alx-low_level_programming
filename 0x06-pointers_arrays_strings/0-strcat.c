#include "main.h"

/**
 * _strcat - function concatenates two strings
 *
 * @dest: pointer to destination input
 * @src: poointer to source input
 *
 * Return: pointer to resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	/*find the size of dest array*/
	while (dest[c])
		c++;

	/*iterate through src array values without the null byte*/
	for (c2 = 0; src[c2]; c2++)
		/*append src[c2] to dest[c] while overwriting the null byte*/
		dest[c++] = src[c2];

	return (dest);
}
