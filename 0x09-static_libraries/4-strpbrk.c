#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: string
 * @accept: string to match
 * Return: pointer to the byte in s that matches a byte in accept
 *	or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}

	return ('\0');
}
