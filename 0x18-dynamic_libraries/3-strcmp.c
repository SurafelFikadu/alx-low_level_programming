#include "main.h"
/**
 * _strcmp - Comares pointers to two strings.
 * @s1: A pointers to the first string to be compared.
 * @s2: A pointers to the second string to be compared.
 *
 * Return: If str1 < str2, the negative difference of the first unmatched char
 *         If str1 == str2, 0.
 *         If str1 > str2, the positive difference of the first unmatched char
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
