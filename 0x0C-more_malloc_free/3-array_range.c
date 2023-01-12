#include "main.h"
#include <stdlib.h>
/**
 * array_range - create of integers ordered from min to max.
 * @min: the first value of the array.
 * @max: the last bvalue of the array.
 *
 * Return: if min > max the function fails - NULL.
 */
int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;
	return (array);
}
