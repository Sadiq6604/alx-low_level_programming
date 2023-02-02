#include "main.h"

/**
 * get_endianness - cheks the endizanness.
 *
 * Return: if big-endian - 0
 * if little-endian - 1
 */
int get_endianness(void)
{
	int num;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}

