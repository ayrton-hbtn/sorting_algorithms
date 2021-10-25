#include "sort.h"

/**
  *
  *
  */
void swap(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

/**
  *
  *
  *
  */
void heapify(int *array, int n, int index, size_t size)
{
	int largest = index;
	int left_child = (2 * index) + 1;
	int right_child = (2 * index) + 2;

	if (left_child < n && array[left_child] > array[largest])
		largest = left_child;

	if (right_child < n && array[right_child] > array[largest])
		largest = right_child;
	if (largest != index)
	{
		swap(&array[index], &array[largest]);
		print_array(array, size);
		heapify(array, n, largest, size);
	}
}

/**
  *
  *
  *
  *
  */
void heap_sort(int *array, size_t size)
{
	for (int i = (size / 2) - 1; i >= 0; i--)
		heapify(array, size - 1, i, size);
	for (int i = size - 1; i > 0; i--)
	{
		swap(&array[0], &array[i]);
		print_array(array, size);
		heapify(array, i, 0, size);
	}
}
