#include "main.h"

/**
 * reverse_array - Reverses the content of array
 * @a: The array of integers to be reversed
 * @n: number of elements in array to be reversed
 */
void reverse_array(int *a, int n)
{
	int x, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		x = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = x;
	}
}
