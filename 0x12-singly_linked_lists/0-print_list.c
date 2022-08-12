#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		if (h->str == NULL)
			printf("[%d] (nil)", 0);
		else
			printf("[%d] %s", h->len, h->str);
		h = h->next;
	}
	return (size);
}
