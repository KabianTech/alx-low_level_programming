#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copies a string to newly allocated space in memory
 * @str: string to copy to new memory
 * Return: pointer to new allocated space memory
 */
char *_strdup(char *str)
{
	int i = 0, j;
	char *s;

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
		i++;

	s = malloc(sizeof(char) * i + 1);

	if (s == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
		s[j] = str[j];

	return (s);
}
