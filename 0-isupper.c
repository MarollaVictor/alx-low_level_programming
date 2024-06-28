#include "main.h"

/**
 *_isupper _ checks if the given char is upper-case
 *
 *_putchar _  tells if the finctiosn is seccess by
 *	returnning 1 or -1 in failure
 *
 * @c : represents the given character
 *
 *
 * Return: 1 if it is upper 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		_putchar('1');
	else
		_putchar('0');
}
