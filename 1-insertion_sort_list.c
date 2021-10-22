#include "sort.h"

/**
 * insertion_sort_list - insertion sort algorithm for a doubly
 * linked list
 * @list: pointer to head of linked list
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *tmp = *list, *back;

    while (tmp->next)
    {
        back = tmp->next;
        while (back->prev && (back->n < back->prev->n))
        {
            if (back->next)
            {
                back->next->prev = tmp;
            }
            if (tmp->prev)
            {
                tmp->prev->next = back;
            }
            back->prev = tmp->prev;
            tmp->next = back->next;
            back->next = tmp;
            tmp->prev = back;
            print_list(*list);
        }
        tmp = tmp->next;
    }
}