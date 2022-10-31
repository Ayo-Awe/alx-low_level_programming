#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates a new file
 * @filename: name of new file or existing file
 * @text_content: text content to be put into the file
 *
 * Return: 1 on success else -1
*/
int create_file(const char *filename, char *text_content)
{
	int fd, wr;
	char *text;

	text = text_content ? text_content : "";

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY, 0600);

	if (fd == -1)
		return (-1);

	wr = (int) write(fd, text, _strlen(text));

	if (wr == -1)
		return (-1);

	close(fd);

	return (1);
}

/**
 * _strlen - gets lenght of a string
 * @s: string pointer to get length of
 *
 * Return: length of the string
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}

	return (len);
}
