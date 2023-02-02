#include "main.h"
/**
 * get_bit - the value of the a given index.
 * @n: the bit.
 * @index: to get tha value at - indices start at b0.
 * Return: if an error occurs -1
 * otherwise - the value of bit atvb ndex.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
