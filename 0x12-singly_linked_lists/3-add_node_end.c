#include "lists.h"

int len(const char *str);
list_t create_node(const char *str);

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: the first node
 * @str: pointer to the new string
 * Return:  the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *new_node;

	tmp = *head;

	if (head == NULL)
		return (NULL);
	new_node = create_node(str);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (tmp->next != '\0')
		tmp = tmp->next;
	tmp->next = new_node;
	return (*head);
}

/**
 * create_node - function that declares or creates a node
 * @str: strin to be placed in the newly created node
 * Return: pointer to the malloced memory
 */

list_t create_node(const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node = NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len(str);
	new_node->next = NULL;
	return (new_node);
}
/**
 * len - find length of a string
 * @str: pointer string used to find its length
 * Return: length of th string
 */

int len(const char *str)
{
	int j = 0;

	if (str == NULL)
		return (NULL);

	while (str[j] != '\0')
	{
		j++;
	}
	return (j);
}
