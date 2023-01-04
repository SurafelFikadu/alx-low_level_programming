#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: provides a similar function
 * Return: the length of thr string.
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
}
