#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: any argument given
 */
void print_all(const char * const format, ...)
{
	int i, j; /* decalre variables and va_arg datatype */
	char *str;
	va_list k;

	va_start(k, format); /* iitialize var arguments */
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(k, int));
				j = 0;
				break;
			case 'f':
				printf("%f", va_arg(k, double));
				j = 0;
				break;
			case 'c':
				printf("%c", va_arg(k, int));
				j = 0;
				break;
			case 's':
				str = va_arg(k, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				j = 1;
				break;
		}
		if (format[i + 1] != '\0' && j == 0) /* if NOT NULL */
			printf(", ");
		i++; /* update step of iteration var */
	}
	printf("\n");
	va_end(k); /*end traversal */
}
