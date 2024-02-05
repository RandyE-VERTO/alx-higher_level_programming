#include "lists.h"

/**
 * check_cycle - checks a list to know if it is a cycle
 *
 * @list: linked list
 *
 * Return: 1 for cycle and 0 for failure
 */

int check_cycle(listint_t *list)
{
	listint_t *c, *p;

	if (!list || !list->next)
	{
		return (0);
	}

	c = list;
	p = list;

	while (p != NULL && c != NULL && c->next != NULL)
	{
		p = p->next;
		c = c->next->next;
		if (p == c)
		{
			return (1);
		}
	}
	return (0);
}
