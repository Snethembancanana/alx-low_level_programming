#include "lists.h"

/**
 * print_list - that prints all the elements of a list_t list
 * @h: head of the list
 * Return: total number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	int j = 1;

	if (h == NULL)
	{
		return (0);
	}
	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[%lu] %s\n", h->len, "(nil)");
		else
			printf("[%lu] %s\n", h->len, h->str);
		h = h->next;
	}
	j++;
	printf("[%lu] %s\n", h->len, h->str);
	return (j);
}
