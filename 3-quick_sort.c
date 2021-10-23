#include "sort.h"

/**
  * swap - swaps two numbers in an array
  * @a: pointer to first number
  * @b: pointer to second number
  */
void swap(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

/**
  * partition - sets last element of array as pivot
  * and first element is maintained while another
  * pointer is scanning through the array. The scan
  * ensures that any element from start to end is less
  * than the pivot element in value and elements from
  * fixed ptr to scanning ptr are bigger than or equal
  * to pivot element (Lomuto schema)
  * @array: pointer to array of int
  * @low: starting index
  * @high: last index
  * @size: size of array
  * Return: index of pivot
  */
int partition(int *array, int low, int high, size_t size)
{
	int i, pivot = array[high], j;

	for (j = low, i = low - 1; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			if (array[i] != array[j])
				print_array(array, size);
		}
	}
	swap(&array[i + 1], &array[high]);
	if (array[high] != array[i + 1])
		print_array(array, size);
	return (i + 1);
}

/**
  * quicksort - implement the Lomuto partition scheme
  * for the quick sort algorithm
  * @array: pointer to first element of array
  * @low: first element of array to sort
  * @high: last element of array to sort
  * @size: size of array
  */
void quicksort(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		quicksort(array, low, pivot - 1, size);
		quicksort(array, pivot + 1, high, size);
	}
}

/**
  * quick_sort - implements the quick sort algorithm
  * with Lomuto schema
  * @array: pointer to first element of unsorted array
  * @size: size of array
  */
void quick_sort(int *array, size_t size)
{
	quicksort(array, 0, size - 1, size);
}
