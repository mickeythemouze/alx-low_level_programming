#include "main.h"

/**
 * *_memcpy - copies n bytes from memory area src
 * to memory area dest
 *
 * @dest: destignation
 * @src: original
 * @n: variable
 * Return: Always dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *f = src;
	char *m = dest;

	while (n > 0)
	{
		*m = *f;
		m++;
		f++;
		n--;
	}
	return (dest);
}
