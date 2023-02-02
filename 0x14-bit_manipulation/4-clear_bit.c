#include "main.h"

/**
 * clear_bit - sets the value of the a bit at bagiven indexc to 0
 * @n: a pointer to the bit
 * @index: the index to set the vlaue at- indices at 0
 *
 * Return: if an error occurs - 1.
 * otherwise - 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}

