#include "holberton.h"
/**
 * read_textfile - prints to POSIX
 * @filename: name of file
 * @letters: letters
 *
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_count, write_count;
	char *buf;

	if (filename == NULL)
	{	return (0);	}

	fd = open(filename, O_RDWR);

	if (fd == -1)
	{	return (0);	}

	buf = malloc(letters);

	if (buf == NULL)
	{	return (0);	}

	read_count = read(fd, buf, letters);

	if (read_count == -1)
	{	return (0);	}

	write_count = write(STDOUT_FILENO, buf, read_count);

	if (write_count == -1 || read_count != write_count)
	{	return (0);	}

	free(buf);

	close(fd);

	return (write_count);
}
