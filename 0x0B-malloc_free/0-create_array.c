#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * intializes it with a specific char
 * @size: size of the array
 * @c: char to fill the array
 * Return: null if size is 0
 * pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
