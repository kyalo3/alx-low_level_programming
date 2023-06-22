#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * followed by a new line
 * @n: string of numbers to be
 * printed
 * @separator: string to be printed between numbers
 * Description: function that prints numbers
 *
 * Return: NULL
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n")
	va_end(valist);
}
