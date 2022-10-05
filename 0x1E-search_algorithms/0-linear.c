#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * @array: is a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: print or -1 if fail
 */

int linear_search(int *array, size_t size, int value)
{
	size_t idx = 0;

	while (idx < size)
	{
		printf("Value checked array[%li] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
		{
			return (idx);
		}
		idx++;
	}
	return (-1);
}
