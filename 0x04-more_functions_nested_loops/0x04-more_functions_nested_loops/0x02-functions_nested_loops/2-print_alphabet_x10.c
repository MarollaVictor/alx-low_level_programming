#include "main.h"

/**
 * print_alphabet_10 - function prints alphabet 10 times
 *
*/

void print_alphabet_x10(void)
{
	int l, ch;

	for (l = 1; l <= 10; l++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		printf('\n');
	}
}
