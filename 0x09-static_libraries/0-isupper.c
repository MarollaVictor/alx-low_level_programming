#include "main.h"

/**
<<<<<<< HEAD
 * _isupper - checks if the given c is upper
 *
 *
 * @c: input for alphabet
 *
 *
 * Return: 1 if it is upper, 0 otherwise
=======
 * _isupper - check if c is upper
 *
 * @c: input for alphabet
 *
 * Return: 1 if it is uppercase, 0 if not
 *
>>>>>>> 39b4b3c8eb2c6b0859026ecd79752c8e5a9e1e2c
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
