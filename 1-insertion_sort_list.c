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
	tmp = current->next;
	while(tmp)
	{
		if (current->n > tmp->n)
		{
			/* depends if current is in the beginning of list or not */
			if (!(current->prev))
				*list = tmp;
			else
				current->prev->next = tmp;
			current->next = tmp->next;
			tmp->prev = current->prev;
			current->prev = tmp;
			tmp->next = current;
			print_list(*list);
			if (tmp->prev)
			{
				while (tmp->n < tmp->prev->n)
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
					printf("fin\n");
				}
			}
		}
		else
			current = current->next;
		tmp = current->next;
	}
}

