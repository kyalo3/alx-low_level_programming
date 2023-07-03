#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - a function that returns the natural square root
 * my_sqrt - function that return the natural square root
 * @my_num: number whose square root if needed
 * @my_root: the root that will be tested
 * @my_sqrt - function defintion
 * @n: number
 * Return: Always 0.
 */

int my_sqrt(int my_num, int my_root)
{
	if ((my_root * my_root) == my_num)
	{
		return (my_root);
	}
	else if (my_root == my_num / 2)
	{
		return (-1);
	}
	else
	{
		return (my_sqrt(my_num, my_root + 1));
	}
}

int _sqrt_recursion(int n)
{
	int the_root = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (my_sqrt(n, the_root));
	}
}
