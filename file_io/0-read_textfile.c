#include "main.h"
/**
 * read_textfile - function reads file
 * @filename: input
 * @letters: num of letters it should read and print
 * Return: num of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	int reading;
	int writing;

	if (filename == NULL)
		return (0);

	buf = malloc(letters);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(buf);
		return (0);
	}

	reading = read(fd, buf, letters);
	if (reading < 0)
	{
		free(buf);
		return (0);
	}

	buf[letters] = '\0';
	writing = write(STDOUT_FILENO, buf, reading);
	if (writing < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (writing);
}
