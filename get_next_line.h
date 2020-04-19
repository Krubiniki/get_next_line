#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <unistd.h>
# define BUFFER_SIZE 6
# define ENDL '\n'
# define END '\0'

int get_next_line(int fd, char **line);

#endif

