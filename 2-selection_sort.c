#include "sort.h"

/**
 * selection_sort - sorts an array following the selection sort algorithm
 * @array: array to sort
 * @size: size of the array;
 */
void selection_sort(int *array, size_t size)
{
	unsigned int n, m, min;

	register int tmp;

	if (size < 2)
		return;

	for (n = 0; n < size; n++)
	{
		min = n;
		for (m = n + 1; m < size; m++)
		{
			if (array[m] < array[min])
				min = m;
		}
		tmp = array[n];
		array[n] = array[min];
		array[min] = tmp;
		if (n != min)
			print_array(array, size);
	}
}
