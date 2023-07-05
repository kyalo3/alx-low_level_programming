#include "main.h"
#include <stdio.h>

/**
* palindromeChecker - checks the string
* _strlen_recursion - returns the length of a string
* @str: string
* @len: lenth of string
* @i: incremetor
* Description: the palindrome functions
* Return: 1 if its a palindrome
*/

int palindromeChecker(char *str, int len, int i)
{
	if (i < len && str[i] == str[len])
	{
		return (palindromeChecker(str, len - 1, i + 1));
	}
	if (str[i] != str[len])
		return (0);
	return (1);
}

/**
* is_palindrome -  checks to see if string is a palindrome
* @s: string to check
* Description: the palindrome functions
* Return: 0 on error, 1 in success
*/
int is_palindrome(char *s)
{
	int i = 0;
	int length = _strlen_recursion(s) - 1;

	return (palindromeChecker(s, length, i));
}


/**
* _strlen_recursion - returns the length of a string
* @s: sting
* Description: the palindrome functions
* Return: 1 on success, 0 on error
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
