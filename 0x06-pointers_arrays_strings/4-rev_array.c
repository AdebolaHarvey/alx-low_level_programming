#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverse array of integers.
 * @a: Array of integer.
 * @n: Number of elements to reverse.
 * Return: Void.
 */

void reverse_array(int *a, int n)

{
	int x;
	int t;

	for (x = 0; x < n--; x++)
	{
		t = a[x];
		a[x] = a[n];
		a[n] = t;
	}
}
