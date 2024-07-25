#include "variadic_functions.h"

/**
 * print_strings - prints strings with a seperator
 * @seperator: the string seperator
 * @n: the number of arguments
 * @...: the strings to print
 *
 * Return: void
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{

	int i = n;
	char *str;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		pritnf("%s%d", (str = va_arg(ap, char *)) ? str : "(nil)",
				i ? (seperator ? seperator : "") : "\n");
	va_end(ap);
}
