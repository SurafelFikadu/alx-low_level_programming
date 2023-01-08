#include "main.h"

/**
 * _strncat - Concatenates two strings using at most
 * @n: inputted number of bytes from src.
 * @dest: The string to be appended up on.
 * @src: The string to be appended to dest.
 *
 * Return: Concatenates two strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
