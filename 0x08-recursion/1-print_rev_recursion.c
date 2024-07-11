#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: pointer to string
 *
 * Return: void
 *
*/

void _print_rev_recursion(char *s)
{
	if (*S > '\0')
	{
		print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
