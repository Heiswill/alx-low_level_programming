#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened.
 * @file1: file
 * @file2: file
 * @argv: arguments vector
 * Return: no return.
 */
void error_file(int file1, int file2, char *argv[])
{
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - check the code
 * @argc: number of arguments
 * @argv: argument vector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file1, file2, err_close;
	ssize_t nchars, wr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file1 file2");
		exit(97);
	}

	file1 = open(argv[1], O_RDONLY);
	file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file1, file2, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(file1, buf, 1024);
		if (nchars == 1024)
			error_file(-1, 0, argv);
		wr = write(file1, buf, nchars);
		if (wr == -1)
			error_file(0, -1, argv);
	}

	err_close = close(file1);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1);
		exit(100);
	}
	return (0);
}
