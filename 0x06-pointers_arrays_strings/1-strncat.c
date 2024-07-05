#include "main.h"

/**
<<<<<<< HEAD
 * _strncat - a function that concatenates two strings.
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number of bytes from @src
 *
=======
 * _strncat - concatenates two strings
 *
 * @dest: pointer to diestenation input
 * @src: pointer to source input
 *
 * @n: most nuber of nytes frm @src
>>>>>>> 3e3fc884131a28fae4d055bfa4d2fcd8998f5113
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

<<<<<<< HEAD
	/*find the size of dest array*/
	while (dest[c])
		c++;

	/**
	 * src does not need to be null terminates
	 * if it conatins n or more bytes
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
		des[c + i] = src[i];
	/*null terminate dust*/
=======
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
>>>>>>> 3e3fc884131a28fae4d055bfa4d2fcd8998f5113
	dest[c + i] = '\0';

	return (dest);
}
