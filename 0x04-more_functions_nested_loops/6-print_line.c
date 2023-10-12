#include "main.h"

/**
 * print_line - Draws a straight line a in the terminal.
 * @n: The num of times the charcter is printed
 * Return: void.
 */

void print_line(int n)

{

	int a;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (a = 0; a < n; a++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
}
