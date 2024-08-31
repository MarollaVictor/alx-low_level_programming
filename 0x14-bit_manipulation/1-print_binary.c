#include "main.h"

/**
 * print-binary - prints a number as binary string
 * @n: num to print
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, pr = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			pr++;
		}
		else if (pr)
			_putchar('0');
	}
	if (!pr)
		_putchar('0');
}
