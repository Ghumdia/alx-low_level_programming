#include "lists.h"

/**
 * *add_nodeint - add a new node
 * @head: header of linked list
 * @n: integer added
 *
 * Return: address to new header
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	newnode->n = n;
	newnode->next = *head;

	*head = newnode;
	return (*head);
}
