#include "main.h"
/**
 * _pow_recursion - returns value of x raised to the power y
 * @x: value to multiply
 * @y: number of times to multiply
 * Return: value multiplied by y times
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
