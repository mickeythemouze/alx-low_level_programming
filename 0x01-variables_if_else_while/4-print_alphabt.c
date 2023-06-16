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
	for (al = 'a'; ((al != 'q') && (al != 'e')) && (al <= 'z'); al++)
		putchar(al);
	}
		putchar('\n');
	return (0);
}
