#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to the name of the file
 * @text_content: pointer to the NULL termeinated string to write the file
 * Return: -1 if file name is NULL or 1 on sucess.
*/

int create_file(const char *filename, char *text_content)
{
	/*Declare your variable fd*/
	int fd;
	int writeBytes;
	int length = 0;

	if (filename == NULL)
		return (-1);
	/*check if the pointer to string is not NULL*/
	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 600);
	writeBytes = write(fd, text_content, length);
	if (writeBytes == -1 || fd == -1)
		return (-1);
	close(fd);
	return (1);
}
