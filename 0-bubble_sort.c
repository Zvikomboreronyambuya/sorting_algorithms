#include "sort.h"

/**
 * bubble_sort - sort array elements from min to max value
 * @array: array
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{

	size_t n, index, tmz = 0;

	if (size < 2)
		return;
	for (n = 0; n < size; n++)
		for (index = 0; index < size; index++)
		{
			if (array[index] > array[index + 1] && array[index + 1])
			{
			tmz = array[index];
			array[index] = array[index + 1];
			array[index + 1] = tmz;
			print_array(array, size);
			}
		}
}