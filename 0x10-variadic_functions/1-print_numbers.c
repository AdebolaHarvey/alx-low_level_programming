#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints numbers.
 * @separator: The string to be printed.
 * @n: Number of integers to be passed.
 *
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x = 0;

	if (n > 0)
	{
		va_start(args, n);

		while (x < n)
		{
			printf("%d", va_arg(args, int));

			if (x != n - 1  && separator != NULL)
				printf("%s", separator);

			x++;
		}
		va_end(args);
	}
	printf("\n");
}
