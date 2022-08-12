#include "lists.h"

/**
 * add_node - function adds a new node
 * @head: first pointer
 * @str: string
 *
 * Return: address of first node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = _strlen(str);
	newnode->next = *head;
	*head = newnode;
	return (*head);
}

/**
 * _strlen - gets length of string
 * @s: string
 *
 * Return: length of string
 */

int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
