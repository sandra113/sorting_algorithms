#include "sort.h"
#include <stdio.h>

/**
 * print_array - function to print an array
 * @array: the array whose elements are to be printed
 * @n: the size of the array
 *
 * Return: nothing
 */
void print_array(int *array, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}
}
