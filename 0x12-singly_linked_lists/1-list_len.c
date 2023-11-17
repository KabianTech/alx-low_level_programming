#include "lists.h"
/**
 * list_len - find the length of a list
 * @h: first node
 * Return: number of elements in a list
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
