#include "main.h"

/**
 * read_textfile - reads a text file and prints to th stdout.
 * @filename: the file name to be read
 * @letters: number of letters to read and print
 * Return: the number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filetxt;
	ssize_t rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	filetxt = open(filename, O_RDONLY);
	if (filetxt == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);

	rd = read(filetxt, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	close(filetxt);
	free(buffer);
	return (wr);
}
