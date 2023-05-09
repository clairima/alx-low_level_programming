#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUFFER_SIZE 1024

void print_usage_and_exit()
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

void print_error_and_exit(const char* format, const char* filename, int code)
{
	dprintf(STDERR_FILENO, format, filename);
	exit(code);
}

int main(int argc, char **argv)
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (argc != 3)
	{
		print_usage_and_exit();
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		print_error_and_exit("Error: Can't read from file %s\n", argv[1], 98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd_to == -1)
	{
		print_error_and_exit("Error: Can't write to %s\n", argv[2], 99);
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			print_error_and_exit("Error: Can't write to %s\n", argv[2], 99);
		}
	}

	if (bytes_read == -1)
	{
		print_error_and_exit("Error: Can't read from file %s\n", argv[1], 98);
	}

	if (close(fd_from) == -1)
	{
		print_error_and_exit("Error: Can't close fd %d\n", argv[1], 100);
	}

	if (close(fd_to) == -1)
	{
		print_error_and_exit("Error: Can't close fd %d\n", argv[2], 100);
	}

	return (0);
}
