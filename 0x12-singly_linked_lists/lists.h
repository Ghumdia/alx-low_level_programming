#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string
 * @len: lenght of string
 * @next: points to next node
 *
 * Description: singly listed node
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
#endif
