#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdllib.h>
#include <string.h>

/**
 * struct list_s - singely linked list
 * @str: string - (malloce'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for ALX project
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_s;

int _putchar(char c);
int _strlen(char *s);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_T *add_node(list_t **head, const char *str);
list_T *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void _constructor(void) __attribute__ ((constructor));

#endif
