#include "main.h"

/**
 * *_memset - fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 *
 * @s: pointer
 * @n: variable
 * @b: address
 * Return: Always s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *f = s;

	while (n > 0)
	{
		*f = b;
		f++;
		n--;
	}
	return (s);
}
