#include "main.h"

/**
 * _strcat - function that cooncatenates 2
 *	strings together
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string dest
 *
*/

char *_strcat(char *dest, char *src)
{
	char c1, c2;

	c1 = 0;
	/*find the size of dest array*/
	while (dest[c1])
		c1++;

	/* iterate through each source array value without the null byte*/
	for (c2 = 0; src[c2]; c2++)
		/*append src[c2] to dest[c1] while overeriting the null byte in dest*/
		dest[c1++] = src[c2];

	return (dest);
}
