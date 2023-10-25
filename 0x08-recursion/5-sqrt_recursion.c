#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: no to calculate the natural square root
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	int i = n * n;

	if (i > n)
		return (-1);
	if (i == n)
		return (i);
	return (_sqrt_recursion(n) + 1);
}
