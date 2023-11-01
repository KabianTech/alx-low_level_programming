#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate a string
 * @str: string to be duplicated
 * Return: string duplicated
 */
char *_strdup(char *str)
{
	int i = 0, j = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[j])
	{
		j++;
	}

	s = malloc((sizeof(char) * j) + 1);

	if (s == NULL)
		return (NULL);

	while (i < j)
	{
		s[i] = str[i];
	}

	s[i] = '\0';
	return (s);
}
