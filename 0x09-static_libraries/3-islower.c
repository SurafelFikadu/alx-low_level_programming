#include "main.h"

/**
 * _islower - short description, single line
 * @c: contain value to be comared
 * Return: Always 0.
 */
int _islower(int c)

{
	if (c > 'a' && 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
