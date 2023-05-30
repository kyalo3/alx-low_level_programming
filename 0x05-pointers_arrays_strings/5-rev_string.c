#include <stdio.h>
#include <unistd.h>
/**
 * rev_string - reverses a string
 * @s: string length
 * length: the size of string
 * return: print reverse string
 */

void rev_string(char *s)
{
	int start = 0;
	int end = - 1;

	while (start < end)
	{
		char temp = s[start];

		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
