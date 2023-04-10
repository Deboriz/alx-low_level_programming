#include "main.h"

/**
 * read_textfile - read  text file and print to POSIX stdout
 * @filename:  files name
 * @letters: total of letters to read and print
 * Return: total of letters read and printed, or 0 if mistaken
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t rcount, wcount;
	char *buffer;

	if (filename == NULL)
		return (0);

	i = open(filename, O_RDWR);
	if (i == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	rcount = read(i, buffer, letters);
	if (rcount == -1)
		return (0);

	wcount = write(STDOUT_FILENO, buffer, rcount);
	if (wcount == -1 || rcount != wcount)
		return (0);
	free(buffer);

	close(i);
	return (wcount);
}
