#include "3-calc.h"
#include <stdlib.h>

/**
*op_add - caculate the addition of 2 numbers
*@a: first no
*@b: second no
*
*Return: addition
*/
int op_add(int a, int b)
{
	return (a + b);
}


/**
*op_sub - subtracts two numbers
*@a: first no
*@b: second no
*
*Return: difference
*/
int op_sub(int a, int b)
{
	return (a - b);
}


/**
*op_mul - calculate the multiplication of 2 numbers
*@a: first no
*@b: second no
*
*Return: multiplication
*/
int op_mul(int a, int b)
{
	return (a * b);
}


/**
*op_mod - calculate the  modulo of 2 numbers
*@a: first no
*@b: second no
*
*Return: reminder of the division
**/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

/**
*op_div - divides 2 numbers
*@a: first no
*@b: second no
*Return: division
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
