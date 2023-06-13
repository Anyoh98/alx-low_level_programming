#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to the name of the file
 * @text_content: pointer to a NULL terminated string to add at end of file
 * Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	/*Declare variables*/
	int fd;
	int length = 0;
	int bytesWritten;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	bytesWritten = write(fd, text_content, length);
	if (bytesWritten == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
