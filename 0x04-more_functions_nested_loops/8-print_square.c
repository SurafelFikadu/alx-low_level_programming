#include "main.h"

/**
 * print_square - Function that prints square
 * @size: width and length
 * Return: square made of '#'
 */

void print_square(int size)
{
int co, ro;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (co = 1; co <= size; co++)
{
_putchar('#')
for (ro = 2; ro <= size; ro++)
{
_putchar('#');
}
_putchar('\n');
}}}
