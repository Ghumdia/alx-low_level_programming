#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints the stuff
 * @h: head of linked list
 *
 * Return: s
 */

size_t print_list(const list_t *h)
{
	size_t s;

	s = 0;
	while (h != NULL)
	{
		s++;
		if (h->str == NULL)
			printf("[%d] (nil)", 0);
		else
			printf("[%d] %s", h->len, h->str);
		h = h->next;
	}
	return (s);
}
