#include "main.h"

#define BUFSIZE 1024
int _close(int fd);

/**
 * main - PROGRAM that copies contents of a file to another
 * @argc: inputs number
 * @argv: input strings array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t n_read, n_write;
	char buf[BUFSIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((n_read = read(fd_from, buf, BUFSIZE)))
	{
		if (n_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			_close(fd_from);
			_close(fd_to);
			exit(98);
		}
		n_write = write(fd_to, buf, n_read);
		if (n_write == -1 || n_write != n_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			_close(fd_from);
			_close(fd_to);
			exit(99);
		}
	}
	if (_close(fd_from) == -1 || _close(fd_to) == -1)
		exit(100);
	return (0);
}
/**
 * _close - checking if there is error then closing
 * @fd: file descriptor
 * Return: 0 on success otherwise -1
 */
int _close(int fd)
{
	if (close(fd) == 0)
		return (0);
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	return (-1);
}
