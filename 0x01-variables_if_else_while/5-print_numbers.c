#include <stdio.h>
/**
 * main - Numbers
 *
 * Return: Always 0 (Success)
*/

/* Printing numbers of single */
int main(void)
{
	int n;

	for (n = '0'; (n <= '9'); n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
