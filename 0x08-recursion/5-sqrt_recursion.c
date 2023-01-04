#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Write a function that returns the natural square root of a number.
 * @n: If n does not have a natural square root, the function should return -1
 * Return: 0.
 */

int _sqrt_recursion(int n)
{
	int r;

	r = _sqrt_recursion(1);
	printf("%d\n", r);
	r = _sqrt_recursion(1024);
	printf("%d\n", r);
	r = _sqrt_recursion(16);
	printf("%d\n", r);
	r = _sqrt_recursion(17);
	printf("%d\n", r);
	r = _sqrt_recursion(25);
	printf("%d\n", r);
	r = _sqrt_recursion(-1);
	printf("%d\n", r);
	return (0);
}
