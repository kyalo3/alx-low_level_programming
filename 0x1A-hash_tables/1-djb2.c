#include "hash_tables.h"
/**
* hash_djb2 - function is used to calculate a
* hash value for a given input string
* @str: the input string to be hashed
* Return: hash value as an unsigned ling integer
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
