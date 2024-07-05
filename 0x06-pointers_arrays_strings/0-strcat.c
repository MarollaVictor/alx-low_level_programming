#include "main.h"

/**
<<<<<<< HEAD
 * _strcat - function that cooncatenates 2
 *	strings together
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string dest
 *
=======
 * _strcat: function concatenates two strings
 * @dest: pointer to destination input
 * @src: pointer to source input
 *
 * Return: void
>>>>>>> 3e3fc884131a28fae4d055bfa4d2fcd8998f5113
*/

char *_strcat(char *dest, char *src)
{
<<<<<<< HEAD
	char c1, c2;

	c1 = 0;
	/*find the size of dest array*/
	while (dest[c1])
		c1++;

	/* iterate through each source array value without the null byte*/
	for (c2 = 0; src[c2]; c2++)
		/*append src[c2] to dest[c1] while overeriting the null byte in dest*/
		dest[c1++] = src[c2];

=======
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
>>>>>>> 3e3fc884131a28fae4d055bfa4d2fcd8998f5113
	return (dest);
}
