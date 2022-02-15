#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * @list: double linked list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp, *aux;

	if (!(*list))
		return;
	current = *list;
	while(current->next)
	{
		if (current->n > current->next->n)
		{
			if (current->prev)
			{
				while (tmp->prev && tmp->n < tmp->prev->n)
				{
					aux = tmp->prev;
					if (!(tmp->prev->prev))
						*list = tmp;
					else
						aux->prev->next = tmp;
					aux->next = tmp->next;
					tmp->prev = aux->prev;
					aux->prev = tmp;
					tmp->next = aux;
					print_list(*list);
					if (!(tmp->prev))
						printf("final\n");
				}
				printf("sali del while\n");
			}
		}
		else
			current = current->next;
		tmp = current->next;
	}
}

