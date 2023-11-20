#include "sort.h"

/**
 * quick_sort - sorts an array with the Quicksort algorithm
 * @array: array of ints to sort
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	quick_recursion(array, 0, (int)size - 1, size);
}

/**
 * quick_recursion - helper function for Quicksort
 * @array: array to sort
 * @left: index of the left element
 * @right: index of the right element
 * @size: size of the array
 */
void quick_recursion(int *array, int left, int right, size_t size)
{
	int piv;

	if (left < right)
	{
		piv = partition(array, left, right, size);
		quick_recursion(array, left, piv - 1, size);
		quick_recursion(array, piv + 1, right, size);
	}
}

/**
 * partition - gives a piv index for Quicksort
 * @array: array to find the piv in
 * @left: index of the left element
 * @right: index of the right element
 * @size: size of the array
 *
 * Return: the index of the piv element
 */
int partition(int *array, int left, int right, size_t size)
{
	int tmp, n;
	int m;

	n = left - 1;

	for (m = left; m < right; m++)
	{
		if (array[m] < array[right])
		{
			n++;
			if (n != m)
			{
				tmp = array[n];
				array[n] = array[m];
				array[m] = tmp;
				print_array(array, size);
			}
		}
	}

	if (array[right] < array[n + 1])
	{
		tmp = array[n + 1];
		array[n + 1] = array[right];
		array[right] = tmp;
		print_array(array, size);
	}

	return (n + 1);
}
