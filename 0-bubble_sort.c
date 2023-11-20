#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - sorts an array in ascending order
 * @array: array of ints to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int n, m;
	int tmp;

	if (size < 2)
		return;

	for (n = 0; n < size; n++)
	{
		for (m = 0; m < size - n - 1; m++)
		{
			if (array[m] > array[m + 1])
			{
				tmp = array[m];
				array[m] = array[m + 1];
				array[m + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
