#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing to binary number
 * converts a binary number to an unsigned int.
 * Return: the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	int h;
	unsigned int deci_val = 0;

	if (!b)
		return (0);
	for (h = 0; b[h]; h++)
	{
		if (b[h] < '0' || b[h] > '1')
			return (0);
		deci_val = 2 * deci_val + (b[h] - '0');
	}
	return (deci_val);
}
