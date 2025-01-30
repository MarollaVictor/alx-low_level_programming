#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return -1;

	for (size_t i = 0; i < size; i++)
	{
		printf("Value checked array [%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
		{
			return (int)i;
		}
	}

	return -1;
}
