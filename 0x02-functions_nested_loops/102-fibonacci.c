#include <stdio.h>

/**
 * main - program to find the first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	unsigned long int f1 = 1;
	unsigned long int f2 = 2;
	unsigned long int next;
	int i;

	printf("%lu, ", f1);

	for (i = 1 ; i < 50 ; i++)
	{
		printf("%lu", f2);
		next = f1 + f2;
		f1 = f2;
		f2 = next;
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
