#include "main.h"

/**
 * _isdigit - checks for digit 0 through 9
 * @c : input check
 * Return: 1 if its a digit or 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
