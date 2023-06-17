#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/*Prints all infite set of single digit numbers*/
int main(void)
{
	int h;

	for (h = 0; h < 10; h++)
	{
		if (h < 10)
				putchar(h + '0');
			if (h != 9)
			{
				putchar(',');
				putchar(' ');
			}
	}
	putchar ('\n');
	return (0);
}

