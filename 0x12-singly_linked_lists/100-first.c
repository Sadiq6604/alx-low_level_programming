#include <stdio.h>

/**
 * first - function executive before main
 * Return: no return
 */

void __attribute__ ((constructor)) first()
{
	printf("you're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
