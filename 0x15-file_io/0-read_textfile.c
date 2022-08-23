#include "main.h"

/**
 * read_textfile - reads a text file
 * @filename: Name of file
 * @letters: number of letters to be read
 *
 * Return: number of text read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t text_rd, text_wr;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters + 1);
	if (buf == NULL)
		return (0);
	text_rd = read(fd, buf, letters);
	if (text_rd == -1)
		return (0);

	buf[letters + 1] = '\0';
	close(fd);

	text_wr = write(STDOUT_FILENO, buf, text_rd);
	if (text_wr == -1)
		return (0);

	free(buf);

	return (text_rd);
}
