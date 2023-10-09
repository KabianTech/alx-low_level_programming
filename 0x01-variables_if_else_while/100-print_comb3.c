#include <stdio.h>

/**
 * main - main function
 *
 *Return: always 0
 */

int main(void)
{
	int i = '0';
	int x = '1';

	while (i < '9')
	{
		while (x <= '9')
		{
			if (!(i > x) || i == x)
			{
				putchar(i);
				putchar(x);
				if (i == '8' && x == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			x++;
		}
		x = '1';
		i++;
	}
return (0);
}
