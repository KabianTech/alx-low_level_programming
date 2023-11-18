#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: singly linked lists
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int nodes;

	if (h == NULL)
		return (0);

	for (nodes = 1; h->next != NULL; nodes++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);

	return (nodes);
}
