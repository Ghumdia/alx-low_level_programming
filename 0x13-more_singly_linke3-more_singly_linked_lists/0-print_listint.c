#include "lists.h"

size_t print_listint(const listint_t *h)
{
	size_t i;

	while (h != NULL)
	{
		i++;
		printf("%d\n", h->n);
	}
	return (i);
}
