#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: min no
 * @max: max no
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *s, i = 0;

	if (min > max)
		return (NULL);

	s = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (s == NULL)
		return (NULL);

	while (min <= max)
	{
		s[i] = min;
		i++;
		min++;
	}

	return (s);
}
