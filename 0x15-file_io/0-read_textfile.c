#include "main.h"

/**
 * read_textfile - Reading text file and print it to STDOUT
 * @filename: text of the file being read
 * @letters: number of letter to be read
 *
 * Return: number of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bts;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bts = read(fd, &buf[0], letters);
	bts = write(STDOUT_FILENO, &buf[0], bytes);
	close(fd);
	return (bts);
}
