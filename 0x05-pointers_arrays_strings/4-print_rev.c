#include "main.h"

/**
 * print_rev - prints reserved string, followed by a new line
 *
 * @s: pointer too the string to print
 *
 * Return: void
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
