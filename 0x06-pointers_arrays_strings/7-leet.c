#include "main.h"
/**
 * leet - encodes a string into 1337
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @i: pointer to a string
 * Return: pointer to i
 */
char *leet(char *i)
{
	int length, counter;
	char letters[] = "aAeEoOtTlL";
	char nums[] = "4433007711";

	length = 0;
	while (i[length] != '\0')
	{
		counter = 0;
		while (counter < 10)
		{
			if (letters[counter] == i[length])
			{
				i[length] = nums[counter];
			}
			counter++;
		}
		length++;
	}
	return (i);
}
