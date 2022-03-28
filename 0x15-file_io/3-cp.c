#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * errorr - prints an error and exits the program.
 * @e: number of exit status.
 * @s: name of the file which produced the error.
 */
void errorr(int e, char *s, char *buff)
{
	if (buff)
		free(buff);
	if (e == 98)
	{
		dprintf(2, "Error: Can't read from file %s\n", s);
		exit(98);
	}
	if (e == 99)
	{
		dprintf(2, "Error: Can't write to %s\n", s);
		exit(99);
	}
}
/**
 * errorfd - prints an error and exits the program.
 * @fd: file descriptor.
 */
void errorfd(int fd, char *buff)
{
	dprintf(2, "Error: Can't close fd %d\n", fd);
	free(buff);
	exit(100);
}
/**
 * file_copy - copies the contents from one file to another.
 * @file_from: name of the file from which the content will be copied.
 * @file_to: file to copy the content.
 */
void file_copy(char *file_from, char *file_to)
{
	int fd1, fd2;
	ssize_t r;
	char *buff;

	fd1 = open(file_from, O_RDONLY);
	buff = malloc(1024);
	if (fd1 == -1)
		errorr(98, file_from, buff);
	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 00664);
	if (fd2 == -1 || !buff)
		errorr(99, file_to, buff);
	r = read(fd1, buff, 1024);
	if (r == -1)
		errorr(98, file_from, buff);
	r = write(fd2, buff, r);
	if (r == -1)
		errorr(99, file_to, buff);
	r = close(fd1);
	if (r == -1)
		errorfd(fd1, buff);
	r = close(fd2);
	if (r == -1)
		errorfd(fd2, buff);
	free(buff);
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
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_copy(argv[1], argv[2]);
	return (0);
}
