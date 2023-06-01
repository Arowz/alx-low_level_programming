#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - This is the singly linked list
 * @str: String - (the malloc'ed string)
 * @len: String length
 * @next: To point to the next node
 *
 * Description: To code the singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

void free_list(list_t *head);
list_t *add_node(list_t **head, const char *str);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node_end(list_t **head, const char *str);

#endif
