#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - read letters amount of chars from filename
 * and priunts them to stdout
 * @filename: the name of the file to read from
 * @letters: the amount of letters to read and print
 * Return: the actual amount of letters it could read from filename
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t readSize = 0;
	char *readBuffer;
	int fd;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	readBuffer = malloc(sizeof(char) * letters);
	if (!readBuffer)
	{
		close(fd);
		return (-1);
	}

	readSize = read(fd, readBuffer, letters);
	readSize = readSize < 0 ? 0 : readSize;

	write(STDOUT_FILENO, readBuffer, readSize);
	close(fd);
	free(readBuffer);

	return (readSize);
}
