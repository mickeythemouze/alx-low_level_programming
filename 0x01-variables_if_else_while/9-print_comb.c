#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/*Prints all infite set of single digit numbers*/
int main(void)
{
	int h, l;

	for (h = 0; h < 10; h++)
	{
			putchar(h + '0');
			if (h != 9)
			putchar(',');
			putchar(' ');
	}
	return (0);
}

