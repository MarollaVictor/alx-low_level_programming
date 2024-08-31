#include "main.h"

/**
 * flip_bits - return number of bits that would need
 *	to be flipped to
 * @n: 1st num
 * @m: 2nd num
 *
 * Return: num of bits t flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int morn = n ^ m;
	unsigned long int c = 0;

	while (morn)
	{
		if (morn & 1ul)
			c++;
		morn = morn >> 1;
	}
	return (c);
}
