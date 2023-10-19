#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @i: pointer to a string
 * Return: pointer to i
 */
char *cap_string(char *i)
{
	int counter;

	counter = 0;
	while (i[counter] != '\0')
	{
		if (i[0] >= 97 && i[0] <= 122)
		{
			i[0] = i[0] - 32;
		}
		if (i[counter] == ' ' || i[counter] == '\t' || i[counter] == '\n'
				|| i[counter] == ',' || i[counter] == ';' || i[counter] == '.'
				|| i[counter] == '.' || i[counter] == '!' || i[counter] == '?'
				|| i[counter] == '"' || i[counter] == '(' || i[counter] == ')'
				|| i[counter] == '{' || i[counter] == '}')
		{
			if (i[counter + 1] >= 97 && i[counter + 1] <= 122)
			{
				i[counter + 1] = i[counter + 1] - 32;
			}
		}
		counter++;
	}

	return (i);
}
