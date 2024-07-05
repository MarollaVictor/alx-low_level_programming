<<<<<<< HEAD
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 *
 * @c: the character to print
 *
 * Return: on success 1.
 * on error, -1 is returned, and eror is set appropriately
=======
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: on success 1
 * on error, -1 is returned, and error is set appropriately
>>>>>>> 3e3fc884131a28fae4d055bfa4d2fcd8998f5113
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
