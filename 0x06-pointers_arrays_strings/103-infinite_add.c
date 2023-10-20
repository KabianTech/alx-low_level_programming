#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * r: buffer that the function will use to store the result
 * size_r: buffer size
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int ov = 0, i = 0, j = 0, dig = 1;
	int v1 = 0, v2 = 0, te = 0;
	int start, end;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || ov == 1)
	{
		if (i < 0)
			v1 = 0;
		else
			v1 = *(n1 + i) - '0';
		if (j < 0)
			v2 = 0;
		else
			v2 = *(n2 + j) - '0';
		te = v1 + v2 + ov;
		if (te >= 10)
			ov = 1;
		else
			ov = 0;
		if (dig >= size_r)
		return (0);

		*(r + dig) = (te % 10) + '0';
		dig++;
		j--;
		i--;
	}
	if (ov == 1)
	{
		if (dig >= size_r)
			return (0);
		*(r + dig) = '1';
		dig++;
	}

	if (dig >= size_r)
		return (0);

	*(r + dig) = '\0';
	
	start = 0;
       	end = dig - 1;

	while (start < end)
	{
		char temp = r[start];
		r[start] = r[end];
		r[end] = temp;
		start++;
		end--;
	}

	return (r);
}
