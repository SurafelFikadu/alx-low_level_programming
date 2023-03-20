#include "main.h"
/**
 * _memset - Fills the first n bytes of the memory area
 * @s: A pointer to memory area to be filled.
 * @b: The character to fill the memory.
 * @n: length of buffer
 * Return: new string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
