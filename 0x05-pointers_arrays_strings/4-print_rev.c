#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reverse
 * @s: used string reference pointer
 */
void print_rev(char *s)
{
	int org = 0;

	while (s[org])
		org++;
	while (org--)
		putchar(s[org]);
	putchar('\n');
}
