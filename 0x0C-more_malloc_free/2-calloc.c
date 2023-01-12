#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocated memory for an array of certain number
 * inputaed by a size byte.
 * @nmemb: the number of element .
 * @size: the byte size of each array.
 *
 * Return: if nmemb = 0, size = 0, or the function fails null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

		if (mem == NULL)
			return (NULL);
	filler = mem;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (mem);
}


