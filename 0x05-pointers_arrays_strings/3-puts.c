#include "main.h"

/**
 *_puts - print a string
 * @str: string to be printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_puts(*str++);
	}
	_puts('\n');
}
