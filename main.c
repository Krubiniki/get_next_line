#include <stdio.h>
#include "get_next_line.h"

int get_next_line(int fd, char **line);

int main(void)
{
	int fd = 0;
	int result = 0;
	char **line;
	line[0] = "0123456789\0";

	fd = open("text.txt", 'r');
	printf ("line before:%s\n",line[0]);

	result = get_next_line(fd, line);

	printf ("return:%i\n",result);
	printf ("line after:%s\n", line[0]);

	return (0);
}
