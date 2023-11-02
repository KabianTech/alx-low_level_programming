#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);
/**
 * word_len - locates the index marking the end of the first word
 * @str: string to be searched
 * Return: index marking the end of initial pointed word by str
 */
int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
	return (len);
}
/**
 * count_words - counts no of words contained within a string
 * @str: string to be searched
 * Return: no of words within str
 */
int count_words(char *str)
{
	int i = 0, j = 0, len = 0;

	for (i = 0; *(str + i); i++)
		len++;
	for (i = 0; i < len; i++)
	{
		if (*(str + i) != ' ')
		{
			j++;
			i += word_len(str + i);
		}
	}
	return (j);
}
/**
 * strtow - splits a string into words
 * @str: string to be split
 * Return: NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	char **s;
	int i = 0, j, w, l, len;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	j = count_words(str);
	if (j == 0)
		return (NULL);

	s = malloc(sizeof(char *) * (j + 1));

	if (s == NULL)
		return (NULL);

	for (w = 0; w < j; w++)
	{
		while (str[i] == ' ')
			i++;

		l = word_len(str + i);

		s[w] = malloc(sizeof(char) * (l + 1));

		if (s[w] == NULL)
		{
			for (; w >= 0; w--)
				free(s[w]);

			free(s);
			return (NULL);
		}
		for (len = 0; len < l; len++)
			s[w][len] = str[i++];

		s[w][len] = '\0';
	}
	s[w] = NULL;

	return (s);
}
