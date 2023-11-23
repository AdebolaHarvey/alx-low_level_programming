#include "main.h"

unsigned long int raise_to_power(unsigned int unit_base, unsigned int pow);

/**
 * raise_to_power - Calculate base raised to power
 * @unit_base: Base of the exponent.
 * @pow: Power of the exponent.
 * Return: Result of the exponent.
 */
unsigned long int raise_to_power(unsigned int unit_base, unsigned int pow)
{
	unsigned long int numb;
	unsigned int i;

	numb = 1;

	for (i = 1; i <= pow; i++)
		numb *= unit_base;
	return  (numb);
}


/**
 * print_binary - Prints the binary representation
 * of a number.
 * @n: The number representation to print.
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	unsigned long int d, ch;
	char fl;

	fl = 0;
	d = raise_to_power(2, sizeof(unsigned long int) * 8 - 1);

	while (d != 0)
	{
		ch = n & d;
		if (ch == d)
		{
			fl = 1;
			_putchar('1');
		}
			else if (fl == 1 || d == 1)
			{
				_putchar('0');
			}
			d >>= 1;
	}
}
