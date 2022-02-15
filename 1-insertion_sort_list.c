#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * @list: double linked list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list, *tmp;

	if (!(*list))
		return;
	tmp = current->next;
	while (tmp)
	{
		if (current->n > tmp->n)
		{
			swapnode(list, current, tmp);
			print_list(*list);
			while (tmp->prev && tmp->n < tmp->prev->n)
			{
				swapnode(list, tmp->prev, tmp);
				print_list(*list);
			}
		}
		else
			current = tmp;
		tmp = current->next;
	}
}
/**
 * swapnode - swaps adjacent nodes a, b (b = a->next)
 * @list: pointer to address of head
 * @a: first node
 * @b: second node
 * Return: list after swap
 */
void swapnode(listint_t **list, listint_t *a, listint_t *b)
{
	/* if "a" is first node*/
	if (!(a->prev))
	{
		*list = b;
		b->prev = NULL;
	}
	else
	{
		a->prev->next = b;
		b->prev = a->prev;
	}

	a->next = b->next;
	/* if "b" isnt last node*/
	if (b->next)
		b->next->prev = a;
	b->next = a;

	a->prev = b;
}
