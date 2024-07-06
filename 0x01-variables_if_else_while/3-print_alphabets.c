#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints lowercaase alphabet
 *	and then uppercase
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int ch = 'a';
	int CH = 'A';

	/*prints a-z first*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/* prints A-Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
