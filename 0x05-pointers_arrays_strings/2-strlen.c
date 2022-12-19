#include "main.h"

/*
 * _strlen - function that return the length string
 *
 * @s: this is the input string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int index;

for (index = 0;  s[index] != '\0' ; index++);

		return (index);
}
