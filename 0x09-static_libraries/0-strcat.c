#include "main.h"

/**
 * _strcat - function that cooncatenates 2
 *	strings together
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string dest
*/

char *_strcat(char *dest, char *src)
{

	int i, j;

	i = 0;
	/*find the size of the dest array*/
	while (dest[i] != '\0')
		i++;

	/*iterate through each src array value without the null byte*/
	j = 0;
	while(src[j] != '\0')
	{
		dest[i] = src [j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
