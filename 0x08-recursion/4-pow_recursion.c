#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Returns the value of x
 * raised to power y.
 * @x: The value.
 * @y: The value of power being raised.
 * Return: The value being raised by y value.
 */

int _pow_recursion(int x, int y)

{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (y * _pow_recursion(x, y - 1));
}
