#include "sort.h"
#include <stddef.h>
#include <stdbool.h>

/**
 * bubble_sort - function that implements bubblesort algorithm
 * @array: the array to sort
 * @size: the of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, k = size - 1;
	int temp;
	bool swap = false;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < k; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swap = true;
				print_array(array, size);
			}
		}
		k--;
		if (swap == false)
			break;
	}
}
