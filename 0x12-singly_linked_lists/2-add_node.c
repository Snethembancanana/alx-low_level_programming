#include "lists.h"

int len(const char *str);

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to the head of the list
 * @str: string to be inserted to the first position
 * Return: pointer(address) to the new element or null if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)

		new_node->next = NULL;
	else

			new_node->next = *head;
		new_node->str = strdup(str);
		new_node->len = len(str);
		*head = new_node;
	return (*head);
}

/**
 * len - length of the string
 * @str: the string to get its length
 * Return: length of the string
 */

int len(const char *str)
{
	int j;

	if (str == NULL)

		return (0);
	for (j = 0; str[j] != '\0'; j++)
	{

	}
	return (j);
}

