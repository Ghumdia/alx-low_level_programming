#include "main.h"

/**
 * _strlen - counts length of string
 * @s: string
 *
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * create_file - create a file
 * @filename: name of file to be created
 * @text_content: contents of file created
 *
 * Return: 1(Success) or -1(Unsuccessful)
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	unsigned int len;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		len = 0;
		text_content = "";
	}
	else
		len = _strlen(text_content);

	bytes_written = write(fd, text_content, len);
	if (bytes_written == -1)
		return (-1);
	close(fd);
	return (1);
}
