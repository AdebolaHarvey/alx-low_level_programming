#include "main.h"
#include <stdio.h>

/**
 * factorial - Returns the factorial of a given number.
 * @n: The given number
 * Return: The value of the integer.
 */

int factorial(int n)

{

	if (n < 0)

		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
