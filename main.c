# include <fcntl.h>
# include "get_next_line.h"
# include <stdio.h>

int main(void)
{
    char        *line;
    int         fd;

    fd = open("test", O_RDONLY);
    get_next_line(fd, &line);
    printf("|%s|\n", line);
    get_next_line(fd, &line);
    printf("|%s|\n", line);
    get_next_line(fd, &line);
    printf("|%s|\n", line);
    get_next_line(fd, &line);
    printf("|%s|\n", line);
    get_next_line(fd, &line);
    printf("|%s|\n", line);
    get_next_line(fd, &line);
    printf("|%s|\n", line);
}