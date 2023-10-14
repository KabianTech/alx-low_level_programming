#include <stdio.h>
/**
 * main - prints the largest prime factor of the
 * number 612852475143
 * Return: 0
 */

int main(void)
{
	long int i, j, k;

	j = 612852475143;
	for (i = 1; i <= j; i++)
	{
		if ((j % i) == 0)
		{
			if (j == i)
			{
				printf("%ld\n", i);
				break;
			}
			k = j / i;
			j = k;
		}
	}
	return (0);
}
