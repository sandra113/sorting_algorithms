#ifndef _SORT_H
#define _SORT_H

#include <stddef.h>

void bubble_sort(int *array, size_t size);
void print_array(int *array, int n);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
int lomuto(int *array, size_t low, size_t high);
void quick_sort_main(int *array, size_t low, size_t high, size_t size);

#endif
