#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @f: input
 * Return: Always 0(Success)
 */
int print_last_digit(int f)
{
	int j;

	if (f < 0)
		f = -f;

	j = f % 10;
	if (j < 0)
		j = -j;
	_putchar(j + '0');

	return (j);
}
