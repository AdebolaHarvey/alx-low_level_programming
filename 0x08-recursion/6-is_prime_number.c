#include "main.h"
#include <stdio.h>

int assess_prime(int n, int i);

/**
 * is_prime_number - Returns 1 if the input integer
 * is a prime num otherwise return 0.
 *
 * @n: The value of the prime number.
 *
 * Return: The value of the integer.
 */

int is_prime_number(int n)

{
	return (assess_prime(n, 1));
}

/**
  * assess_prime - Check if number is prime
  * @n: the number to be checked
  * @i: the iteration times
  *
  * Return: 1 for prime or 0 composite
  */
int assess_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (assess_prime(n, i + 1));
}
