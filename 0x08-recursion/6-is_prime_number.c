#include "main.h"
#include <stdio.h>

int check_prime(int, int)

/**
 * is_prime_number - a function that returns
 * @n:  is a number
 * Return: integer
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helperFunction(n, 2));
	}
}

/**
 * helperFunction - it check prime numbers
 * @nun: number being checked
 * @i: possible factor of the number.
 * Return: 0 if not prime, 1 if prime.
 */

int helperFunction(int num, int i)
{
	if (i < num)
	{
		if (num % 1 == 0)
		{
			return (0);
		}
		else
		{
			return (helperFunction(num, i + 1));
		}
	}
	else
	{
		return (1);
	}
}
