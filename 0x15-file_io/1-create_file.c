#include "main.h"

/**
 * _strlen - determine a string lengt
 * @s: string to be checked
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int j = 0;

	if (!s)
		return (0);

	while (*s++)
		j++;
	return (j);
}

/**
 * create_file - creating file.
 * @filename: name of file
 * @text_content: content of text
 *
 * Return: 1 on success otherwise 0
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	if (len)
		bytes = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}
