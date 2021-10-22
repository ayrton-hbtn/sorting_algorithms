#include "sort.h"

/**
 *
 * 
 * 
 */
/*
void insert_sorted(listint_t **head, listint_t *node)
{
    listint_t *tmp = *head;

    if (!*head)
    {
        node->prev = NULL;
        node->next = NULL;
        *head = node;
    }
    else if ((*head)->n >= node->n)
    {
        node->next = *head;
        (*head)->prev = node;
        *head = node;
    }
    else
    {
        while (tmp->next && tmp->next->n < node->n)
        {
            tmp = tmp->next;
        }
        node->next = tmp->next;
        if (tmp->next)
            tmp->next->prev = node;
        tmp->next = node;
        node->prev = tmp;
    }
}*/

/**
 * 
 * 
 * 
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
            back = back->prev;
            print_list(*list);
        }
        tmp = tmp->next;
    }
}