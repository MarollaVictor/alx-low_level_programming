#include "main.h"

/**
 * *_strdup - return a pointer to a newly allocated space in memory
 * which contains a copy of a string given as parameter
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
	;
	| m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
		return (NULL);
	else
	{
	
			m[i] = str[i];
	}
	|return (m);
}
