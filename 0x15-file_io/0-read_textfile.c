#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read a text file and print to POSIX stdout
 * @filename: name of the file to read from.
 * @letters: number of letters to read and print
 * Return: actual num of letters it could read and print.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	/*declare a pointer variable*/
	ssize_t fd;
	ssize_t writeBytes;
	ssize_t readBytes;
	char *buffer;

	/*create and open the file using open*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	/*allocate memory to store content of the file*/
	buffer = malloc(sizeof(char) * letters);
	/*Read from the file into the buffer*/
	readBytes = read(fd, buffer, letters);
	if (readBytes <= 0)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	/*print content of buffer that was read to the stdout*/
	writeBytes = write(STDOUT_FILENO, buffer, readBytes);

	free(buffer);
	close(fd);
	return (writeBytes);
}
