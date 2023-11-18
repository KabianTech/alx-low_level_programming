#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of the node
 * @str: string
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *t;
	unsigned int i, j = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		j++;
	newnode->len = j;
	newnode->next = NULL;
	t = *head;

	if (t == NULL)
		*head = newnode;
	else
	{
		while (t->next != NULL)
			t = t->next;
		t->next = newnode;
	}
	return (*head);
}
