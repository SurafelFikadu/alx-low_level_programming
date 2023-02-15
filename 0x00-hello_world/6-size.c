#include <stdio.h>

/**
 * main - prints the size of varies types
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
	char i;
	int j;
	long int k;
	long long int l;
	float f;

	printf("Size of a char: %lu byte(S)\n", sizeof(i));
	printf("Size of an int: %lu byte(S)\n", sizeof(j));
	printf("Size of of a long int: %lu byte(S)\n", sizeof(k));
	printf("Size of of a long long int: %lu byte(S)\n", sizeof(l));
	printf("Size of of a float: %lu byte(S)\n", sizeof(f));

	return (0);
}
