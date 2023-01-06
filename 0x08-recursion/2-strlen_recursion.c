#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: provides a similar function
 * Return: the length of thr string.
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);
	s++;
	return (1 + strlen recursion(s));
}
