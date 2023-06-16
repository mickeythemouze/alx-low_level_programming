#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/*prints all single digit numbers of base 10*/
int main(void)
{
	int j;
	for( j = '0' ; j <= '9'; j++)
	{
		printf("%.1d", j);
	}
	printf("\n");
		return (0);
}
