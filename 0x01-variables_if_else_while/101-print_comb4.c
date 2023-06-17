#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* prints all possible different combinations of three digits */
int main(void)
{
	int o, p , t;

	for (o = 0; o < 9; o++)
	{
	for ( p = o + 1; p < 10; p++)
	{
	for ( t = p + 1; t < 100; t++)
	{
		putchar(o + '0');
		putchar(p + '0');
		putchar(t + '0');
		if (o != 7 || p != 8 || t != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	}
	}
	putchar('\n');
	return (0);
}
