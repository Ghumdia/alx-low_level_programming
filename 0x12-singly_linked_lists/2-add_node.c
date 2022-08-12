#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));

	newnode->str = strdup (str);
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
