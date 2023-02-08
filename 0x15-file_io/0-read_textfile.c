#include "main.h"

/**
 * read_textfile - read a file and print to stdout
 * @filename: filename
 * @letters: size
 * Return: size read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc;
	ssize_t _read, _write;
	char *buffer;

	if (!filename)
		return (0);

	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	_read = read(file_desc, buffer, letters);
	if (_read == -1)
		goto KILL;

	_write = write(STDOUT_FILENO, buffer, _read);
	if (_write == -1)
		goto KILL;

	close(file_desc);
	return (_read);

KILL:	free(buffer);
	close(file_desc);
	return (0);
}
