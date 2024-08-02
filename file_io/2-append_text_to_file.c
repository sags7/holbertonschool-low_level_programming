#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * append_text_to_file - creates a file with some text in it
 * @filename: the name of the file
 * @text_content: the text content to append to the file (null terminated)
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int flags = O_WRONLY | O_APPEND;
	ssize_t writtenBytes = 0;

	if (!filename)
		return (-1);

	fd = open(filename, flags);
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
