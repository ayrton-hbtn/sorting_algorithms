#include "sort.h"
#include <stddef.h>
/**
 * counting_sort - Function that sorts an array of integers
 * in ascending order using the Counting sort algorithm
 * @array: array of int
 * @size: size of the array
 */
void counting_sort(int *array, size_t size)
{
	int max_value, j, l;
	int *counter, *array_sorted;
	size_t i, k, m, n;

	if (size < 2)
		return;
	max_value = array[0];
	for (i = 1; i < size; i++) /*Finds the max value on the array*/
		if (array[i] > max_value)
			max_value = array[i];

	counter = malloc(sizeof(size_t) * (max_value + 1));/*Allocates memory for*/
	/*all the values from 1 to max_value exist or not in array*/
	if (!counter)
		return;
	array_sorted = malloc(sizeof(int) * size);
	if (!array_sorted)
		return;

	for (j = 0; j <= max_value; j++)/*Initializes the values of*/
	/* the array counter to 0*/
		counter[j] = 0;
	for (k = 0; k < size; k++)/*Counts the number of appearances of each value*/
	{
		counter[array[k]] += 1;
	}
	for (l = 1; l <= max_value; l++)/*Modify counter by adding the previous*/
	/* count value*/
		counter[l] += counter[l - 1];
	print_array(counter, max_value + 1);
	for (m = 0; m < size; m++)/*Place values in their correct position and*/
	/*  decreases counter value in 1 each time*/
	{
		array_sorted[counter[array[m]] - 1] = array[m];
		counter[array[m]]--;
	}
	for (n = 0; n < size; n++)
		array[n] = array_sorted[n];
	free(counter);
	free(array_sorted);
}
