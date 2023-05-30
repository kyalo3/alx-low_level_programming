#include <stdio.h>
#include <unistd.h>
/**
  * swap_int - swaps the values of two integers.
  * @a: integer
  * @b: integer
  * Return - always 0
  */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
