#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: no of members
 * @size: no of bytes
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, j = 0;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = nmemb * size;
	s = malloc(j);

	if (s == NULL)
		return (NULL);

	while (i < j)
	{
		s[i] = 0;
		i++;
	}

	return (s);
}
