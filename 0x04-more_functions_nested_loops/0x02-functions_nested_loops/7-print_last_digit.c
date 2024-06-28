#include "main.h"

/**
 * int print_last_digit(int) - print the last digit of a number
 *	to return the value of the last digit
 * @n: takes number input
 * Return: always 0 (Success)
 *
*/

int print_last_digit(int)
{
	int last_digit;

	if (n < 0)
		last_digit = -1 * (n % 10);
	else
		last_digit = n % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
