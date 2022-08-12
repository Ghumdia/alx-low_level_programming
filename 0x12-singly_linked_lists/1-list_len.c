#include "lists.h"

/**
 * list_len - number of elements
 * @elm: number of elements
 *
 * Return: 0
 */

size_t list_len(const list_t *h)
{
	size_t elm = 0;

	while (h != NULL)
	{
		elm++;
		h = h->next;
	}
	return (elm);
}
