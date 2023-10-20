#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints a buffer
 * @b: pointer to the buffer
 * @size: no of bytes of the buffer
 */
void print_buffer(char *b, int size)
{
	int i;
	int s = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	while (s < size)
	{
		printf("%08x: ", s);

		for (i = 0; i < 10; i++)
		{
			if (s + i < size)
		       	{
				printf("%02x", (unsigned char)b[s + i]);
				if (i % 2 != 0)
				{
					printf(" ");
				}
			}

			else 
			{
				printf("   ");
			}
		}

		printf(" ");

		for (i = 0; i < 10; i++)
		{
			if (s + i < size)
			{
				char x = b[s + i];

				if (x >= 32 && x <= 126)
				{
					printf("%x", x);
				}
				else
				{
					printf(".");
				}
			}
		}

		printf("\n");
		s += 10;
	}
}
