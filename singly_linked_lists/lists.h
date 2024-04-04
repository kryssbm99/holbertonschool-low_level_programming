#ifndef LISTS_H
#define LISTS_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *struct list - Single linked lists
 *@str: String for malloc
 *@len: Length of the string
 *@next: Singly linked lists node struc
 */

typedef struct list
{
	char *str;
	unsigned int len;
	struct list *next;
} list_t;

size_t print_list(const list_t *h);

#endif
