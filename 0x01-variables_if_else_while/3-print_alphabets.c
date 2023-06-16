#include <stdio.h>
/**
 * main - Lowercase Alphabets
 *
 * Return: Always 0 (Success)
*/

/* Printing alphabets in lower case */
int main(void)
{
	char al;
	{
	for (al = 'a'; al <= 'z'; al++)
		putchar(al);
	}
	{
	for (al = 'A'; al <= 'Z'; al++)
		putchar(al);
	}
		putchar('\n');
	return (0);
}
