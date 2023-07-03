#include "main.h"
#include <stdio.h>

/**
 * factorial - function that returns a factorial
 * @n: number
 * Return: Always 0.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (1);
	}
}
