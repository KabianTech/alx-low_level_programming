#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to the string
 */
void rev_string(char *s)
{
	int length, i;
	char k;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length / 2; i++)
	{
		k = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = k;
	}
}
