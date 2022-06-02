#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: path name to the file
 * @letters: num of letters inside the file
 * Return: The number of letters readed-printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedes, readed, writed, error = -1;
	char *buffer;

	
	if (!filename)
		return (0);

	
	filedes = open(filename, O_RDONLY);
	if (filedes == error)
		return (0);

	
	buffer = malloc(letters);
	if (!buffer)
		return (0);

	
	readed = read(filedes, buffer, letters);
	writed = write(STDOUT_FILENO, buffer, readed);
	if (writed == error)
		return (0);

	
	close(filedes);
	return (writed);
}
