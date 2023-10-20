#include "main.h"
#include <stdio.h>
/**
 * print_number - prints an integer
 * @n: integer
 */
void print_number(int n)
{
	unsigned int i;

	i = n;
	if (n < 0)
	{
		putchar('-');
		i = -n;
	}
	if (i / 10 != 0)
	{
		print_number(i / 10);
	}
	putchar((i % 10) + '0');
}
