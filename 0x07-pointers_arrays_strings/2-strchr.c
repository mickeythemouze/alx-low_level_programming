#include "main.h"

/**
 * *_strchr - returns a pointer to the first occurence
 *
 * @s: string
 * @c: character
 * Return: Always s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
