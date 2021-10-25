#include "sort.h"

/**
  * swap - swaps two integers a, b
  * @a: int, becomes b
  * @b: int, becomes a
  */
void swap(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

/**
  * heapify - comparison-based sorting technique based
  * on Binary Heap data structure, a complete Binary Tree
  * where items are sorted in a way that the parent node
  * is greater than the values in its two children nodes.
  * @array: pointer to first element of array
  * @n: last index of array
  * @index: index of parent node
  * @size: size of array
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
  * heap_sort - implements the heapify function
  * @array: pointer to first element of unsorted array
  * @size: size of array
  */
void heap_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	for (int i = (size / 2) - 1; i >= 0; i--)
		heapify(array, size - 1, i, size);
	for (int i = size - 1; i > 0; i--)
	{
		swap(&array[0], &array[i]);
		print_array(array, size);
		heapify(array, i, 0, size);
	}
}
