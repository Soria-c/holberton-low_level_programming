#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * errorr - prints an error and exits the program.
 * @e: number of exit status.
 * @s: name of the file which produced the error.
 */
void errorr(int e, const char *s)
{
	if (e == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		exit(98);
	}
	if (e == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
		exit(99);
	}
}
/**
 * errorfd - prints an error and exits the program.
 * @fd: file descriptor.
 */
void errorfd(int fd)
{
	dprintf(2, "Error: Can't close fd %d\n", fd);
}
/**
 * file_copy - copies the contents from one file to another.
 * @file_from: name of the file from which the content will be copied.
 * @file_to: file to copy the content.
 */
void file_copy(const char *file_from, const char *file_to)
{
	int fd1, fd2, c1, c2;
	ssize_t r, r2;
	char buff[1024];

	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
		errorr(98, file_from);
	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		close(fd1);
		errorr(99, file_to);
	}
	r = read(fd1, buff, 1024);
	for (; r; r = read(fd1, buff, 1024))
	{
		if (r == -1)
			errorr(98, file_from);
		r2 = write(fd2, buff, r);
		if (r2 == -1)
			errorr(99, file_to);

	}
	c1 = close(fd1);
	c2 = close(fd2);
	if (c1 == -1 || c2 == -1)
	{
		if (c2 == -1)
			errorfd(fd2);
		if (c1 == -1)
			errorfd(fd1);
		exit(100);
	}
}
/**
 * main - checks number of arguments
 * @argc: number of arguments.
 * @argv: arguments.
 * Return: 0 on success.
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_copy(argv[1], argv[2]);
	return (0);
}
