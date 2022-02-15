#include "sort.h"
/**
 * cocktail_sort_list - sorts an int double linked list using Cocktail sort
 * @list: mem address of double linked list
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *current = *list;
	int change = 1;

	if (!(list) || !(*list))
		return;
	if (!(current->next))
		return;
	(*list)->prev = NULL;
	while (change)
	{
		change = 0;
		while (current->next)
		{
			if (current->n > current->next->n)
			{
				swapnode(list, current, current->next);
				print_list(*list);
				change = 1;
			}
			else
				current = current->next;
		}
		while (current->prev)
		{
			if (current->n < current->prev->n)
			{
				swapnode(list, current->prev, current);
				print_list(*list);
				change = 1;
			}
			else
			{
				current = current->prev;
			}
		}
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
