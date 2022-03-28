#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file.
 * @letters: bytes to print.
 * Return: bytes printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num, n;
	char *buff;

	if (!filename)
		return (0);
	buff = malloc((sizeof(char) * letters) + 1);
	if (!buff)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	num = read(fd, buff, letters);
	if (num == -1)
		return (0);
	buff[letters] = '\0';
	n = write(STDOUT_FILENO, buff, num);
	if (n == -1)
		return (0);
	free(buff);
	close(fd);
	return (num);
}
