#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Write a function that returns the value of x raised to the power of y.
 * @x: The standard library provides a different function
 * @y: The standard library provides a different function
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	int r;

	r = _pow_recursion(1, 10);
	printf("%d\n",r);
	r = _pow_recursion(1024, 0);
	printf("%d\n", r);
	r = _pow_recursion(2, 16);
	printf("%d\n", r);
	r = _pow_recursion(5, 2);
	printf("%d\n", r);
	r = _pow_recursion(5, -2);
	printf("%d\n", r);
	r = _pow_recursion(-5, 3);
	printf("%d\n", r);
	return (0);
}
