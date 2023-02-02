#include "main.h"

/**
 * flip_bits - cont the num of bit br flipped
 * to get from one number to another
 * @n: the number.
 * @m: the number flip n to
 *
 * Return: the neccessary num of the bit flip from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}

