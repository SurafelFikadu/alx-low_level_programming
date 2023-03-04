#include "main.h"
#include <stdio.h>
void print_times_table(int n)
{
	int a;
	int b;

	for (a = 0; a <= 12; a++)
	{
		for (b = 0; a <= 12; a++)
		{
			n = a * b;
			if (n / 10 == 0)
			{
				if (b == 0)
				{
					putchar(n + '0');
					putchar(',');
					putchar(' ');
				} else if(b != 0)
				{
					putchar(' ');
					putchar(' ');
					putchar(n + '0');
					if (b < 12)
					{
						putchar(',');
						putchar(' ');
					}
				}
			} else if (n / 10 >= 1 && n / 10 <= 9)
			{
				putchar(' ');
				putchar(n / 10 + '0');
				putchar(n % 10 + '0');
				if (b < 12)
				{
					putchar(',');
					putchar(' ');
				}
			} else if (n / 10 >= 10)
			{
				putchar(n / 10 + '0');
				putchar(((n - n % 10) / 10) % 10 + '0');
				putchar(n % 10 + '0');
				if (b < 12)
				{
					putchar(',');
					putchar(' ');
				}
			}
		} putchar('\n');
	}
}
