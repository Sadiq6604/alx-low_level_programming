#include <stdio.h>
#include "main.h"
/**
 * main - print the name of the program
 * @argc: cont arguments
 * @argv: argument
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
