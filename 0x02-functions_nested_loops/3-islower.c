#include "main.h"

/**
 * _islower - checks for lowercase charcter
 *
 * @c: The character to be checked
 * Return: 1 if 'c' is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	/* 'c' is lowecase */
	}
	else
	{
	return (0);
	/* 'c' is otherwise */
	}
}
