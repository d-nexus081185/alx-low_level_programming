#include <stdlib.h>
#include "lists.h"

/**
 * list_len - A program that returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: (n) to show success
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
