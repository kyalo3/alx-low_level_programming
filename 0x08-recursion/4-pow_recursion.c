#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - a function that returns the value of x
 * @x: integer to power
 * @y: power integer
 * Return: Always 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
