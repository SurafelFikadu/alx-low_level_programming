#include "main.h"
/**
 * _strchr - Locates a character in a string
 * @s: string
 * @c: Character to search
 * Return: Pointers to the first occurance of the character c in the string s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0') /*Declaring while*/
	{
		if (*s == c) /*if s == c*/
		{
			return (s); /*return s*/
		}

		++s;
	}

	if (*s == c)
	{
		return (s);
	}

	return (0); /* values null*/
}
