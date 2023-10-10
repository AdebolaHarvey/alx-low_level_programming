#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - Prints the last digit of a number
 * @r: The number to be treated
 * Return: Value of the last digit of number
 */

int print_last_digit(int r)

{

	int last;

	last = r % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
