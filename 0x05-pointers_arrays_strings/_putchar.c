#include <unistd.h>

/**
 * _putchar - writes the character c stdout
 * @c: the character to print
 *
 * Return: on success 1
 * on erro, -1 is returned , and eroor is there returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
