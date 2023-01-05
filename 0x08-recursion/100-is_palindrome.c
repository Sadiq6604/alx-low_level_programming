#include "main.h"
/**
 * _lenght - check the lengty of string
 * @s: is the string.
 * Return: the lenght of string
 */
int _lenght(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _lenght(s + 1));
}

/**
 * checkp - check if the string is palindrome
 * @i: is the index
 * @lg: for the lenght of string
 * @s: string
 * Return: 1 if the polindrome or 0 if not
 */
int checkp(int i, int lg, char *s)
{
	if (lg > 0)
	{
		if (s[i] == s[lg])
		{
			return (checkp(i + 1, lg - 1, s));
		}
		else if (s[i] != s[lg])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

/**
 *is_palindrome - checks if the string is a palindrome
 *@s: is the string
 * Return: 1 if is palindrome or 0 if not
 **/
int is_palindrome(char *s)
{
	return (checkp(0, _lenght(s) - 1, s));
}

