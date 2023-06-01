#include <stdio.h>
#include "lists.h"

/**
 * print_list - This is to print all elements of a linked list
 * @h: This pointer to the list_t list
 *
 * Return: number of nodes that is printed
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}

	return (n);
}

