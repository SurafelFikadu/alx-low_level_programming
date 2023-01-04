#include "main.h"
#include <stdio.h>

/**
 * factorial - Write a function that returns the factorial of a given number.
 * @n: If n is lower than 0, the function should return -1 to indicate an error.
 * Return: 0
 */

int factorial(int n)
{
	int r;

	r = factorial(1);
	printf("%d\n", r);
	r = factorial(5);
	printf("%d\n", r);
	r = factorial(10);
	printf("%d\n", r);
	r = factorial(-1024);
	printf("%d\n", r);
	return (0);
}
