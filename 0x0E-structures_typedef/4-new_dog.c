#include "dog.h"
#include <stdlib.h>
int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
/**
 * _strlen - finds the length of a string
 * @str: string to be measured
 * Return: length of the string
 */
int _strlen(char *str)
{
	int length = 0;

	while (*str++)
		length++;

	return (length);
}
/**
 * _strcopy - copies a string pointer to by src
 * @dest: the buffer storing the string copy
 * @src: source string
 * Return: pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: new dog name
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
}

	d->name = _strcopy(d->name, name);
	d->age = age;
	d->owner = _strcopy(d->owner, owner);

	return (d);
}
