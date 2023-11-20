#include "lists.h"
/**
 * listint_len - count the number of elements in a linked list
 * @h: head pointer
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	if (h == NULL)
		return (0);

	for (; h != NULL; counter++)
	{
		h = h->next;
	}
	return (counter);
}
