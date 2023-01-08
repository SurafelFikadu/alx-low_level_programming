#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 * Return: returns to capitalized string.
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[++index])
	{
		while (!(str[index] >= 'a' && str[index]x <= 'z'))
			index++;

		if (str[index - 1] == ' ' ||
				str[index -1] == '\t' ||
				str[index -1] == '\n' ||
				str[index -1] == ',' ||
				str[index -1] == ';' ||
				str[index -1] == '.' ||
				str[index -1] == '!' ||
				str[index -1] == '?' ||
				str[index -1] == '"' ||
				str[index -1] == '(' ||
				str[index -1] == ')' ||
				str[index -1] == '{' ||
				str[index -1] == '}')
			str[index] -= 32;
	}
	return (str);
}
