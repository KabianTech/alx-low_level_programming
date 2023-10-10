#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int i, x;

	for (i = '0' ; i <= '99' ; i++)
	{
		for (x = '0' ; x <= '99' ; x++)
		{
			for (i < x && i != x)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((x / 10) + '0');
				putchar((x % 10) + '0');
				if (i != '98' || x != '99')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
