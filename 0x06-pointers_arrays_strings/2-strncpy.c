#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: pointer to destination input buffer
 * @src: pointer to soure input buffe
 * @n: bytes of source
 *
 * Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/**
	 * iterate through source array
	 * not equal null byte
	 * among the first n bytes of source
	 * the string placed in dest will not be
	 * null terminated
	*/

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	/**
	 * if the length of source is less than n
	 * write additional null byte to dest
	 * ensure that a total of n bytes is written
	*/
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
