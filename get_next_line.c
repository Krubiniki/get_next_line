#include "get_next_line.h"

int get_next_line(int fd, char **line)
{
	static char	*buf;
	int		i;
	int		fdR;
	int		nline;

	i = 0;
	nline = 0;
	fdR = read(fd, buf,BUFFER_SIZE);

	if (fdR > 0)
	{
		if (!(buf = (char *)malloc(sizeof(char) * BUFFER_SIZE)))
			return (-2);
		while (i < BUFFER_SIZE)
		{
			line[nline][i] = buf[i];
			if (buf[i] == ENDL)
				return (1);
			if (buf[i] == END)
				return (0);
			i++;
		}
	}
	return (-1);
}
