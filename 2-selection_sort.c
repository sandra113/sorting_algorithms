#include "sort.h"

/**
 * selection_sort - sorts an array using selection sort
 * @array: the array to be checked
 * @size: the size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, idx, sorted;
	int var;

	for (i = 0; i < size; i++)
	{
		var = array[i];

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < var)
			{
				var = array[j];
				idx = j;
				sorted = 1;
			}
			if (array[i - 1] == array[j - 2])
				continue;
			if (j == size - 1)
			{
				array[idx] = array[i];
				array[i] = var;
				print_array(array, size);
			}
		}
		if (sorted == 0)
			break;
	}
}
