#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: Name of the file to read.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         If the function is successful - number of letters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t leno, lenr, lenw;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	leno = open(filename, O_RDONLY);
	lenr = read(leno, buffer, letters);
	lenw = write(STDOUT_FILENO, buffer, lenr);

	if (leno == -1 || lenr == -1 || lenw == -1 || lenw != lenr)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(leno);

	return (lenw);
}
