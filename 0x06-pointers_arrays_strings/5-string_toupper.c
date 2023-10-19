#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @i: pointer to a string
 * Return: pointer to uppercase string
 */
char *string_toupper(char *i)
{
	int length;

	length = 0;

	while (i[length] != '\0')
	{
		if (i[length] >= 97 && i[length] <= 122)
		{
			i[length] = i[length] - 32;
		}
		length++;
	}

	return (i);
}
