#include "lists.h"

/**
 * list_len - length of the list
 * @h: pointer to the first node
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	int j = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		j++;
	}
	h = h->next;
	return (j);
}
