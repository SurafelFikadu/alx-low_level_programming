#include <stdio.h>

/**
 * main - prints the size of varies types
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
printf("Size of a char: %d byte(S)\n", sizeof(char));
printf("Size of an int: %d byte(S)\n", sizeof(int));
printf("Size of of a long int: %d byte(S)\n", sizeof(long int));
printf("Size of of a long long int: %d byte(S)\n" sizeof(long long int));
printf("Size of of a float: %d byte(S)\n", sizeof(float));
return (0);
}
