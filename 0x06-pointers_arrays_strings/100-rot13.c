#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @i: pointer to a string
 * Return: i
 */
char *rot13(char *i)
{
	int j, k;

	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alpharot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (j = 0; i[j] != '\0'; j++)
	{
		for (k = 0; k < 52; k++)
		{
			if (i[j] == alpha[k])
			{
				i[j] = alpharot[k];
				break;
			}
		}
	}

	return (i);
}
