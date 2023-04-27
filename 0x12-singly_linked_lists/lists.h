#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct ls
{
	char *str;
	unsigned int len;
	struct ls *next;
} list_t;

size_t print_list(const list_t *h);

#endif
