#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/*prints all possible different combinations of two digits*/
int main(void)
{
	int f, k;

	for (f = 0; f < 9; f++)
	{
		for (k = f + 1; k < 10; k++)
		{
			putchar(f + '0');
			putchar(k + '0');
		}
		if (f != 9 || k != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
