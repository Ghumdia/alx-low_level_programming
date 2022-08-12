#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));

	newnode->str = strdup(str);
	newnode->len = _strlen(str);
	newnode->next = NULL;
	if (*head == NULL)
		*head = newnode;
	else
	{
		list_t *lastnode = *head;
		while (lastnode->next != NULL)
			lastnode = lastnode->next;
		lastnode = newnode;
	}
}

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
