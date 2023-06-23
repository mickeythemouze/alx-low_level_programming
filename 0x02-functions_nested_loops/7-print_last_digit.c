#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @f: input
 * Return: Always 0(Success)
 */
int print_last_digit(int f)
{
	if (f < 0)
		f = -f;
	return (f % 10);
}
