#include "main.h"

/**
 * _pow_recursion - calculate the first num powered by
 *	the second one
 * @x: base
 * @y: exponent
 * Return: if success returns the powered number,
 * failed -1
 */

int _pow_recursion(in x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
