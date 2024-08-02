#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * create_file - creates a file with some text in it
 * @filename: the name of the new file
 * @text_content: the text content of the file (null terminated)
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int flags = O_WRONLY | O_CREAT | O_TRUNC;
	mode_t mode = S_IRUSR | S_IWUSR;
	ssize_t writtenBytes = 0;

	if (!filename)
		return (-1);

	fd = open(filename, flags, mode);
	if (fd < 0)
		return (-1);

	if (text_content)
		writtenBytes = write(fd, text_content, strlen(text_content));
	if (writtenBytes < 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
