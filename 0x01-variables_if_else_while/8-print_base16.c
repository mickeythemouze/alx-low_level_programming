#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/*Prints all the numbers in base 16*/
int main(void)
{
	int h;

	for (h = 0; h < 10; h++)
	{
		if (h < 10)
			putchar(h + '0');
		}
	for (h = 0; h < 6; h++)
	{
		if (h < 6)
			putchar(h + 'a');
		}
	putchar('\n');
	return (0);
}

