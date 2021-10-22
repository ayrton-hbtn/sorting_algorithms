#include "sort.h"

/**
*
*
*
*
*/
void bubble_sort(int *array, size_t size)
{
    int i, tmp, flag = 1;

    while (flag)
    {
        flag = 1;
        for (i = 0; array[i]; i++)
        {
            if (array[i + 1] && (array[i] > array[i + 1]))
            {
                tmp = array[i + 1];
                array[i + 1] = array[i];
                array[i] = tmp;
                print_array(array, size);
                flag++;
            }
            else
                continue;
        }
        if (flag == 1)
            flag = 0;
    }
}