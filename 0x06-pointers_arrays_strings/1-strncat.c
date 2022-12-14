#include "main.h"

/**
 *_strncat - concateentae two strings but add inputted number bytes
* @dest: string to be appended opon
* @src: string to be completed at end of dest
* @n:integer parameter to compare index to
* Return: returns new concatenated string
*/
char *_stncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
