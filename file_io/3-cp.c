
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - copies the content of one file to another
 * @argc: the number of arguments
 * @argv: the arguments
 * Return: 0 on success, or an exit code on failure
 */

void print_error_and_exit(const char *message, const char *file, int exit_code)
{
	dprintf(STDERR_FILENO, "%s %s\n", message, file);
	exit(exit_code);
}

int main(int argc, char *argv[])
{
	int fdFrom, fdTo, readBytes, writtenBytes;
	char buffer[1024];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fdFrom = open(argv[1], O_RDONLY);
	if (fdFrom < 0)
	{
		print_error_and_exit("Error: Can't read from file", argv[1], 98);
	}

	fdTo = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fdTo < 0)
	{
		close(fdFrom);
		print_error_and_exit("Error: Can't write to", argv[2], 99);
	}

	while ((readBytes = read(fdFrom, buffer, 1024)) > 0)
	{
		writtenBytes = write(fdTo, buffer, readBytes);
		if (writtenBytes != readBytes)
		{
			close(fdFrom);
			close(fdTo);
			print_error_and_exit("Error: Can't write to", argv[2], 99);
		}
	}

	if (readBytes < 0)
	{
		close(fdFrom);
		close(fdTo);
		print_error_and_exit("Error: Can't read from file", argv[1], 98);
	}

	if (close(fdFrom) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdFrom);
		exit(100);
	}

	if (close(fdTo) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdTo);
		exit(100);
	}

	return 0;
}
