#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: array of integers.
 * @n: number of elements of array.
 * Return: success.
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
	t = a[i];
	a[i] = a[n];
	a[n] = t;
	}
}
