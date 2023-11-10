#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to teh function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list j;

	va_start(j, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(j, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(j);
}
