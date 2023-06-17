#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/*Prints all the numbers in base 16*/
int main(void)
{
	int ch;

	for (ch = 0; ch < 10; ch++)
		{
			putchar(ch + '0');
		}
	for (ch = 0; ch < 6; ch++)
		{
			putchar(ch + 'a');
		}
	putchar('\n');
	return (0);
}

