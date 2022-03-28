#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: content to append the file.
 * Return: 1 if successful, -1 otherwise.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (; text_content[i]; i++)
			;
	}
	else
		text_content = "";
	write(fd, text_content, i);
	return (1);
}
