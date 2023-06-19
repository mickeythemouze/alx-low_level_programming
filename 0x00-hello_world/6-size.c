#include <stdio.h>

/**
 * main - A program that prints sizes
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char j;
	int b;
	long int c;
	double d;
	float e;

	/*size of variable types*/
	printf("Size of a char: %lu byte(s)\n",sizeof(j));
	printf("Size of an int: %lu byte(s)\n",sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", sizeof(c));
	printf("Size of a long long int: %lu byte(s)", sizeof(d));
	printf("Size of a float: %lu byte(s)\n", sizeof(e));		
	return (0);

}
