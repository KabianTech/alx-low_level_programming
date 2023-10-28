#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: no of bytes
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, i;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++, length++)
	{
		dest[length] = src[i];
	}
	dest[length] = '\0';

	return (dest);
}
