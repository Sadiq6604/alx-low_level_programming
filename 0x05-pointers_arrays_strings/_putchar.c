#include <unistd.h>

/**
 * _putchar - writes the character c stdout
 * @c: char to be prined
 * Return: on success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
