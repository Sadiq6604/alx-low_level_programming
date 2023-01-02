#include "main.h"
/**
 * _memset - fills a block of memory  with a specific value
 * @s: starting address of memory to bre filled
 * @b: the desired value to be changed
 * @n: number of bytes to bre changed
 *
 * Return changed array with new value for n bytes
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
