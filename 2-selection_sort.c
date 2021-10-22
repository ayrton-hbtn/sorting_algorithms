#include "sort.h"

/**
 * 
 * 
 * 
 */
void selection_sort(int *array, size_t size)
{
    size_t i, j, position;
	int tmp;

    for (i = 0; i < size - 1; i++)
    {
        position = i;
        for (j = i + 1; j < size; j++)
        {
            if (array[position] > array[j])
                position = j;
        }
        if (position != i)
        {
            tmp = array[i];
            array[i] = array[position];
            array[position] = tmp;
        }
        print_array(array, size);
    }
}
