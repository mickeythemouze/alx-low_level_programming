#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: variable 1 to be swapped
 * @b: variable 2 to be swapped
 */
void swap_int(int *a, int *b)
{
	int j = *a;

	*a = *b;
	*b = j;
}
