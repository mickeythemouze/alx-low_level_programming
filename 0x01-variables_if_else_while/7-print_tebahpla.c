#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

/* Printing alphabets in lower case but in reverse */
int main(void)
{
	char al;
	{
	for (al = 'z'; al >= 'a'; --al)
		putchar(al);
	}
		putchar('\n');
	return (0);
}
