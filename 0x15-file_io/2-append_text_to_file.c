#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: name of file
 * @text_content: strings to add to end of file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int food, status, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	food = open(filename, O_APPEND | O_WRONLY);
	if (food == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;
	status = write(food, text_content, i);
	if (status == -1)
		return (-1);

	close(food);
	return (1);
}
