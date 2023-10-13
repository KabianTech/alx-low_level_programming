#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	int limit = 4000000;
	int f1 = 1;
	int f2 = 2;
	int next;
	int sum = 2;

	while (next <= limit)
	{
		next = f1 + f2;
		if (next % 2 == 0)
			sum = sum + next;
		f1 = f2;
		f2 = next;
	}
	printf("%d\n", sum);
	return (0);
}
