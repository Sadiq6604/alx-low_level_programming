#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * struct list_s -singly linked list
 * @str: strings
 * @len: len of the strings
 * @next: pointer to th next nodey
 * 
 * Description: singly linked list node structure
 */
typedef struct LIST_S
{
	char *str;
	unsigned int len;
	struct LIST_S * next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
