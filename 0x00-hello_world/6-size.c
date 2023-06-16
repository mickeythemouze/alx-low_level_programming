#include <stdio.h>

/**
 * main - A program that prints sizes
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	/*size of variable types*/
	printf("Size of a char: %2d byte(s)\n", sizeof(a));
	printf("Size of an int: %2d byte(s)\n", sizeof(b));
	printf("Size of a long int: %2d byte(s)\n", sizeof(c));
	printf("Size of a long long int: %2d byte(s)\n" sizeof(d));
	Printf("Size of a float: %2d byte(s)\n" sizeof(e));		
	return (0);

}
