#include "variadic_functions.h"
/**
 * print_numbers - print numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j;

	va_list k;

	va_start(k, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(k, const unsigned int);
		printf("%d", j);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(k);
}
