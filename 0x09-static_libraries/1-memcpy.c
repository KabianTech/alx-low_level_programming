#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: memory area
 * @src: bytes from memory area
 * @n: no of bytes function copies
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
