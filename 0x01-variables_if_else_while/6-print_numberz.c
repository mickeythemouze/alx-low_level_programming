#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* prints all single digits using putchar */
int main(void)
{
	int m;

	for (m = 0; m <= 9; m++)
	{
		putchar(m + '0');
	}
	putchar('\n');
		return (0);
}
