#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0-9 using putchar
 *	while useing int variable
 *
 * Return: 0
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*Convert digit to ASCII represintation*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
