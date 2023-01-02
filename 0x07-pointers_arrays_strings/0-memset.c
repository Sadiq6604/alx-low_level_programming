#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: starting address of memory to bre filled
 * @b: the desired value to be changed
 * @n: number of bytes to bre changed
 *
 * Return: new string.
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
