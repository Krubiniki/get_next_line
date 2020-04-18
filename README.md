# get_next_line
A 42 project to make a function named get_next_line, that learn more about static variables

Function name:
get_next_line

Prototype:
int get_next_line(int fd, char **line);

Parameters #1. file descriptor for reading
#2. The value of what has been read

Return value 
1 : A line has been read
0 : EOF has been reached
-1 : An error happened

External functs. permitted: read, malloc, free

Description: Write a function which returns a line read from a
file descriptor, without the newline
