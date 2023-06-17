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
		for (l = 1; l < 10; l++)
		{
			putchar(h + '0');
			putchar(',');
			putchar(' ');
			putchar(l + '0');
	
		}
	}
	return (0);
}

