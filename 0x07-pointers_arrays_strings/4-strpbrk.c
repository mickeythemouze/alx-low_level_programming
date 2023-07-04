#include "main.h"

/**
 * *_strpbrk - locates the first occurrence in the string s of any
 * of the bytes in the string accept
 *
 * @s: string
 * @accept: occurrence
 * Return: s if found, else NULL
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *j = accept;

		while (*j != '\0')
		{
			if (*j == *s)
			{
				return (s);
			}
			j++;
		}
		s++;
	}
	return (NULL);
}
