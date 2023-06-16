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
	printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)\n",(unsigned long)sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n" (unsigned long)sizeof(d));
	Printf("Size of a float: %lu byte(s)\n" (unsigned long)sizeof(e));		
	return (0);

}
