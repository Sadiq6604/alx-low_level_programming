#include "main.h"

/**
 * _str - concatenating the string pointed to by @src to
 * the end of the string to by @dest
 * @dest:string that will be appended
 * @src: string pointer to @dest
 *
 * Return:returns pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
