#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - a function to append text
 * at the end of the file
 * @filename: name of the file
 * @text_content: the string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		if (write(fd, text_content, _strlen(text_content))
				== -1)

			return (-1);
	}

	close(fd);

	return (1);
}

/**
 * _strlen - the length of the string to return
 * @s: the string to count
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c])
		c++;

	return (c);
}

