#include <stdio.h>
/**
 * main - prints all posible combination of two two-digit number.
 * Return: 0
 */
int main(void)
{
int i;
int j;

for (i = 0; i < 100; i++)
{
for (i = 0; i < 100; j++)
{
if (j < i)
{
putchar(i / 10 + '0');
putchar(i % 10 + '0');
putchar(' ');
putchar(j / 10 + '0');
putchar(j % 10 + '0');
if (i * 100 + j != 9899)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
