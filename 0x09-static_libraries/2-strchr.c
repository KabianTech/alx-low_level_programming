#include "main.h"
/**
 * _strchr - locates a charcter in a string
 * @s: string
 * @c: character to be located
 * Return: a pointer to the first occurrence of char c or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
