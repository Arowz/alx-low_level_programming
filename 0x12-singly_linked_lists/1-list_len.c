
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - the func that returns number of elements in a linked list
 * @h: The pointer to the list_t list
 *
 * Return: number of elements in the pointer to the list_t list
 */
size_t list_len(const list_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}
	return (number);
}
