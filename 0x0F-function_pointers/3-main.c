#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the result of simple operation
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int i, j;
	char *k;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	i = atoi(argv[1]);
	k = argv[2];
	j = atoi(argv[3]);

	if (get_op_func(k) == NULL || k[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*k == '/' && j == 0) ||
			(*k == '%' && j == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(k)(i, j));

	return (0);
}
