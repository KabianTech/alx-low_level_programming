#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string to be checked
 * Return: length of the string
 */
int _strlen(char *s)
{
	int str_len = 0;

	while (s[str_len])
		str_len++;
	return (str_len);
}
