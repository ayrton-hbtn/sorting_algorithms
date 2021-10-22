#include "sort.h"

/**
*
*
*
*
*/
void insertion_sort_list(listint_t **list)
{
    listint_t *tmp = *list, *after, *swap;

    while (tmp->next)
    {
        after = tmp->next;
        while (after->prev && after->prev->n > after->n)
        {
            swap = after->prev;
            if (swap->prev)
            {
                swap->prev->next = after;
                after->prev = swap->prev;
            }
            if (after->next)
            {
                after->next->prev = swap;
                swap->next = after->next;
            }
            swap->prev = after;
            after->next = swap;
            print_list(*list);
        }
        tmp = tmp->next;
    }
}