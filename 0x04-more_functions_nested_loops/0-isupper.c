#include "main.h"

/**
 * _isupper _ checks if the given char is upper-case
 *
 * @c : represents the given character
 *
 * Return: 1 if it is upper 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
