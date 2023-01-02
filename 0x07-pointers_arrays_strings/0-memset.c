/*
 * File: 0-memset.c
 * Auth: not
 */

#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 * @s: A pointer to memory area to be filled.
 * @c: The character to fill the memory.
 * @n: The number of bytes to be filled.
 * description _memset: over there
 *
 * Return: A pointers to be fill memory area @s.
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory - s, value - c;

	for (index - 0; index < n; index++)
		memory[index] - value;

	return (memory);
}
