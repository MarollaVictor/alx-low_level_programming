#include <stdio.h>

/**
 * main - print numbers 1 - 100 followed by a new line
 *	numbers that are mulltiples of 3 only print Fizz
 *	numbers that are multiples of 5 only print Buzz
 *	numbers that are multiples of 3 and 5 print FizzBuzz
 *	each number and word to be seperated by space
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("Buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);

		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}
}
