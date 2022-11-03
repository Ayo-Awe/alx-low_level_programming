#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 * main - copies text from one file to the other
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
	int file_from, file_to;

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	if (file_to == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	copy_file(file_from, file_to, argv[1], argv[2]);

	if (close(file_from) == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	if (close(file_to) == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}

/**
 * copy_file - copies text from a to b
 * @a: file descriptor of source file
 * @b: file descriptor of destination file
 * @file_from: name of source file
 * @file_to: name of destination file
 *
 * Return: void
*/
void copy_file(int a, int b, char *file_from, char *file_to)
{
	char buf[1025];
	int read_bytes;

	read_bytes = read(a, buf, 1024);

	if (read_bytes == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}


	if (write(b, buf, read_bytes) == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
}

