#include "main.h"

/**
 * _islower - checks for lowercase charcter
 *
 * c - lowercase characters
 *
 * Return: 1 if its lowercase and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
