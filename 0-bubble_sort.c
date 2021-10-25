#include "sort.h"
#include <stdbool.h>

/**
 * bubble_sort - bubble algorithm for sorting array
 * @array: pointer to array of int
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	int i, tmp, flag = false;

	if(size < 2)
		return;

	while (flag == false)
	{
		flag = true;
		for (i = 0; array[i]; i++)
		{
			if (array[i + 1] && (array[i] > array[i + 1]))
			{
				tmp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = tmp;
				print_array(array, size);
				flag = false;
			}
		}
	}
}
