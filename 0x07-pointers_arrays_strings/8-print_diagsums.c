#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals of square.
 * @a: pointers to array.
 * @size: size of array.
 *
 * Return: void.
 */

void print_diagsums(int *a, int size)
{
	int i, size1;
	unsigned int sumDiag1, sumDiag2;

	size1 = 0;
	sumDiag1 = 0;
	sumDiag2 = 0;

	size = (size * size) - 1;

	for (i = 0; i <= size1; i = i + (size + 1))
	{
		sumDiagl = sumDiagl + a[i];
	}
	for (i = (size - 1); i < size1; i = i + (size - 1))
	{
		sumDiag2 = sumDiag2 + a[i];
	}
	printf("%d, %d\n", sumDiag2);
}
