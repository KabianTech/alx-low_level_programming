#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to the string
 */
void rev_string(char *s)
{
	int length, i, j;
	char k;

	for (length = 0; s[length] != '\0'; length++)
	{
		i = 0;
		j = length / 2;
	}
	while (j--)
	{
		k = s[length - i - 1];
		s[length - i - 1] = s[i];
		s[i] = k;
		i++;
	}
}
