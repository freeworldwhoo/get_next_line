#include "get_next_line.h"
#include <fcntl.h>

int main(void)
{
	int fd;
	char *line;

	fd = open("text_file.txt",O_RDONLY);

	while (get_next_line(fd, &line))
		ft_putendl(line);

	return (0);
}