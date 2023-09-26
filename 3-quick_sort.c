#include "sort.h"

/**
 * quick_sort - quick sort algorithm
 * @array: the array to sort
 * @size: the size of the array
 *
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	if (size <= 1)
		return;
	quick_sort_main(array, 0, size - 1, size);
}


/**
 * quick_sort_main - function to execucte the quick_sort algorithm
 * @array: the array the sort
 * @low: the start of the partion
 * @high: the end of the partion
 * @size: the size of the array
 *
 * Return: nothing
 */
void quick_sort_main(int *array, size_t low, size_t high, size_t size)
{
	size_t idx;

	if (low < high)
	{
		idx = lomuto(array, low, high);
		if (idx > 0)
			quick_sort_main(array, low, idx - 1, size);
		print_array(array, size);
		quick_sort_main(array, idx + 1, high, size);
	}
}
/**
 * lomuto - the partioning algorithm
 * @array: the array to partioning
 * @low:  the start of the partion
 * @high: the end of the partion
 *
 * Return: index of the pivot
 */
int lomuto(int *array, size_t low, size_t high)
{
	int pivot = array[high], temp;
	size_t i = low - 1, j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
	}
	temp = array[i + 1];
	array[i + 1] = array[high];
	array[high] = temp;
	return  (i + 1);
}
