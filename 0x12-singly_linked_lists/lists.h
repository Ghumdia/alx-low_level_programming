#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <stdlib.h>
#include <limits.h>

typedef struct node
{
	char *str;
	int *len;
	struct node *next;
} list_t;

size_t print_list(const list_t *h);

#endif
