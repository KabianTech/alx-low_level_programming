#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on each
 * element of an array
 * @array: array
 * @size: size of the array
 * @action: pointer to the executed function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
