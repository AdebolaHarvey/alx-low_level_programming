#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - Addition operation.
  * @a: First value.
  * @b: Second value
  *
  * Return: Integer value.
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - Subtraction operation
  * @a: First value
  * @b: Second value.
  *
  * Return: Integer value.
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - Multiplication operation
  * @a: First value
  * @b: Second value.
  *
  * Return: Integer value.
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - Division value.
  * @a: First value.
  * @b: Second value.
  *
  * Return: Integer value.
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - Modifying operation.
  * @a: Fist value
  * @b: Second value.
  *
  * Return: Vlue of the mifified integer.
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
