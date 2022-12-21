#include "main.h"

/**
 * print_rev - print a string in reverse order
 * @s: a pointer to an int that will be changeed
 *
 * Return: void which means our anwer is correct
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[1] != '\0')
	{
		i++;
	}
	for (i = i - 1 ; i >= 0; i--)
	{
		_putchar(s[1]);
	}
	_putchar('\n');
}
