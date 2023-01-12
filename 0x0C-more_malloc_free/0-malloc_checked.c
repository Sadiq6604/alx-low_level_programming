#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allaocate using mallov
 * @b: size of the memory to be allocated
 * Return: pointer allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}


