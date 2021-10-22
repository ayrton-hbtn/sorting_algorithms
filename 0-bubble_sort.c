#include "sort.h"

/**
*
*
*
*
*/
void bubble_sort(int *array, size_t size)
{
    int i, tmp;

    for (i = 0; array[i]; i++)
    {
        if (array[i + 1] && (array[i] > array[i + 1]))
        {
            tmp = array[i + 1];
            array[i + 1] = array[i];
            array[i] = tmp;
            print_array(array, size);
        }
        else
            continue;
    }
}