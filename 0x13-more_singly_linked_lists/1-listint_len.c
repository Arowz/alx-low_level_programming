#include "lists.h"

/**
 * listint_len - This returns the number linked lists element
 * @h: listint_t linked list to traverse
 *
 * Return: nodes numbers
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}
