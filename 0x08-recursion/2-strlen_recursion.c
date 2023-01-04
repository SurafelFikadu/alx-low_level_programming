#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Write a function that returns the length of a string.
 * @s:  provides a similar function
 * Return: 0.
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
}
