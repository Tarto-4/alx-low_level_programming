#include "main.h"
/**
 * create_file - creates a file.
 * @filename: name of the file oto create
 * @text_content: text to write in the file
 *
 * Return: 1 for success -1 for failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	int t = 0;
	int s = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[s])
			s++;
		t = write(fd, text_content, s);
		if (t != s)
			return (-1);
	}

	close(fd);

	return (1);
}
