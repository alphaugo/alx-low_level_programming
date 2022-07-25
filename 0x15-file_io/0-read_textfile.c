#include "main.h"

/**
  * read_textfile - ...
  * @filename: The source file
  * @letters: Number of letters to reads and prints
  *
  * Return: ...
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, reader;

	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RONLY, 0600);

	if (fd = -1)
		return (0);

	reader = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, reader);

	free(buff);
	close(fd);
	return (reader);
}
