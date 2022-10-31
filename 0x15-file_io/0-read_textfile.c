#include <unistd.h>
#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - read text from file
 * @filename: name of file to be read
 * @letters: number of letters to be read and printed
 *
 * Return: the number of letters read and printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd, rd, wr;

	char *buf = malloc(sizeof(char) * (letters + 1));

	if (!buf)
		exit(1);

	if (!filename)
	{
		return (0);
		free(buf);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	rd = (int) read(fd, buf, letters);
	if (rd == -1)
	{
		free(buf);
		return (0);
	}
	wr = (int) write(STDOUT_FILENO, buf, rd);
	if (wr == -1)
	{
		free(buf);
		return (0);
	}
	close(fd);
	free(buf);
	return (wr);
}


