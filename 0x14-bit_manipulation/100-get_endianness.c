#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian.
 * checks the endianness
 * Return: 0 for big, 1 for little
 */

int get_endianness(void)
{
	unsigned int h = 1;
	char *j = (char *) &h;

	return (*j);
}
