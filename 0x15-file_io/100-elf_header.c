#include "main.h"

/**
 *  * main - void
 *   * @argc: inputs number
 *    * @argv: array of strings passed
 *     * Return: nothin
 *      */
int main(int argc, char *argv[])
{
	int filedescriptor;
	
	if (argc != 2)
		write(STDERR_FILENO, "Usage: elf_header elf_filename\n", 31), exit(98);

	filedescriptor = open(argv[1], O_RDONLY);
	if (filedescriptor == -1)
		write(STDERR_FILENO, "Error: Can't read from file\n", 28), exit(98);
	exit(98);
}
