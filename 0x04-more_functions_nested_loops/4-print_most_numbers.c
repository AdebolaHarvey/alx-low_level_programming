#include "main.h"

/**
 * print_most_numbers - Print the numbers from 0 to 9
 * excluding 2 and 4
 * Return: The number from 0 to 9 excl 2 and 4.
 */

void print_most_numbers(void)

{

	int r = 0;

	for (; r <= 9; r++)
	{
	if (r == 2 || r == 4)
	{
	continue;
	}
	else
	{
	_putchar(r + '0');
	}
	}
	_putchar('\n');
}
