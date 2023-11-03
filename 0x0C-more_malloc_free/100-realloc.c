#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: size in bytes of allocated spaces
 * @new_size: size in bytes of new memory block
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		s = malloc(new_size);

		if (s == NULL)
			return (NULL);

		return (s);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	s = malloc(new_size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
	{
		s[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (s);
}
