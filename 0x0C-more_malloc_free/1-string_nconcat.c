#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate a bytesof string  to anoher string
 * @s1: string to apppend to
 * @s2: string to concatenate
 * @n: number of byte  from s2 to cocatenate to s1
 *
 * Return: pointer to the result string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char concat;
	unsigned int len = n, index;

	if (s1 == NULL)
		s ="";
        if (s2 == NULL)
		s2 = "";
	for (index = 0; s1[index]; index++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		concat[len++] = s1[index];
	
	for (index = 0; s2[index] && index < n; index++)
		concat[len++] = s2[index++];

	concat[len] = '\0';

	return (concat);
}

