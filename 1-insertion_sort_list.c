#include "sort.h"

/**
 * insertion_sort_list - insertion sort algorithm for a doubly
 * linked list
 * @list: pointer to head of linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *back;

	if (!list || !(*list) || !(*list)->next)
		return;

	tmp = *list;
	while (tmp)
	{
		back = tmp;
		while (back->prev && back->n < back->prev->n)
		{
			back->prev->next = back->next;
			if (back->next)
			{
				back->next->prev = back->prev;
			}
			back->next = back->prev;
			back->prev = back->prev->prev;
			back->next->prev = back;
			if (!back->prev)
				*list = back;
			else
				back->prev->next = back;
			print_list(*list);
		}
		tmp = tmp->next;
	}
}
