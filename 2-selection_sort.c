#include "sort.h"

/**
 * selection_sort - sorts an array using selection sort
 * @array: the array to be checked
 * @size: the size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, idx, temp;

	for (i = 0; i < size - 1; i++)
	{
		idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[idx])
				idx = j;
		}
		if (idx != i)
		{
			temp = array[idx];
			array[idx] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
