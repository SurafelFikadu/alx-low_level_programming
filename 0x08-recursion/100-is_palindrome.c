#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - Write a function that returns 1 if a string is a palindrome and 0 if no
 * @s: An empty string is a palindrome
 * Return: 0.
 */

int is_palindrome(char *s)
{
	int r;

	r = is_palindrome("level");
	printf("%d\n", r);
	r = is_palindrome("redder");
	printf("%d\n", r);
	r = is_palindrome("test");
	printf("%d\n", r);
	r = is_palindrome("step on no pets");
	printf("%d\n", r);
	return (0);
}
