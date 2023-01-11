#include "main.h"
#include <stdio.h>

/**
 * main - prints the minimum number of coins to
 * make change for the amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	/*declearing varibles*/
	int position, total, change, aux;
	int coins[] = {25, 10, 5, 2, 1}; /*Array int*/

	position = total = change = aux = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = _atoi(argv[1]); /*convert str to int*/

	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}

	/*declaring while*/
	while (coins[position] != '\0')
	{
		if (total >= coins[position])
		{
			aux = (total / coins[position]);
			change += aux;
			total -= coins[position] * aux;
		}
		position++;
	}
	printf("%d\n", change);
	return (0);
}
