#include "main.h"

/**
 * _strlen - returns the length of an string
 *
 * @s: the given string
 *
 * Return: length of the string
*/

int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		++counter;
		s++;
	}

	return (counter);
}
