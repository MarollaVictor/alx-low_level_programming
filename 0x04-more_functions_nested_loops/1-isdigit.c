#include "main.h"

/**
<<<<<<< HEAD
 * _isdigit - checks if input is digit between 0 - 9
 *
 * @c: input
 *
 * Return: 1 if is digit, 0 if not
=======
 * _isdigit - checks if unput is between 0 - 9
 *
 * @c: given input
 *
 * Return: 1 if c is digit, 0 if none
>>>>>>> 39b4b3c8eb2c6b0859026ecd79752c8e5a9e1e2c
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
