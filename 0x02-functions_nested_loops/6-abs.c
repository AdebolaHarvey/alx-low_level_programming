#include "main.h"
#include <stdio.h>

/**
 * _abs - Computes the absolute value of an integer.
 * @m: The number to be computed.
 * Return: Absolute value of number or zero
 */

int _abs(int m)

{

	if (m < 0)
	{
	int abs_val;

	abs_val = m * -1;
	return (abs_val);
	}
	return (m);
}
