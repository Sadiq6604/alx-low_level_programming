#include "main.h"
/**
 * _strchr - Locates a character in a string
 * @s: string
 * @c: character to search
 * Return: pointer to the first occurrence of the charcter c in the strings
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0') /*declaring WHILE*/
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}
	if (*s == c)
	{
		return (s);
	}

	return (0);
}

