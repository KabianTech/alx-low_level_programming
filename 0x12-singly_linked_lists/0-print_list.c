#include "lists.h"
/***
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the beginning of the list
 *
 * Description: this function prints all the elements of a list_t
 * list
 * If a string is NULL, it prints [0] (nil)
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes;

	nodes = 0;

	while  (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		nodes++;
	}

	return (nodes);
}
