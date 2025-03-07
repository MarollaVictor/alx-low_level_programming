#include "search_algos.h"

/**
 * binary_search - searches for int value
 *	in a sorted array using binary search
 * @array: pointer to the 1st element of array to search
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: -1 if the array is empty, or value = NULL
 *	or the index of the serached value
 */


int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
	{
		return (-1);
	}

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
