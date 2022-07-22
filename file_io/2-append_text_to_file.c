#include "main.h"
/**
 * append_text_to_file - appends text to end of file
 * @filename:  name
 * @text_content: NULL to add at the end of the file
 * Return: 1 success and -1 failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i;
	int fd;
	int writing;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		i = 0;
		while (text_content[i] != '\0')
		{
			i++;
		}
		writing = write(fd, text_content, i);
		if (writing == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
