#include "main.h"

/**
 * _isdigit - checks if unput is between 0 - 9
 *
 * @c: given input
 *
 * Return: 1 if c is digit, 0 if none
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
