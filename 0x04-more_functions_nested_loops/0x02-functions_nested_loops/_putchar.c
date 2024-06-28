#include <unistd.h>
#include "main.h"

/*
 *  _putchar writes the char c to the standard output
 *  c: The character to be printed
 *  Return : on success 1
 *  on error -1
 */

int _putchar(char c)
{	return (write(1, &c, 1));




}
