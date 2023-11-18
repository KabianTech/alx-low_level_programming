#include "lists.h"
/**
 * add_node - adds new node at the beginning of a list_t list
 * @head: head of node
 * @str: string to store
 * Return: address of the new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int i, j = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
		j++;
	newnode->len = j;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
