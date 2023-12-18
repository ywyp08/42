#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "get_next_line.h"

int	main(void)
{
	int	fd;
	char	*line;

	fd = open("testfile.txt", O_RDONLY);
	while ((line = get_next_line(fd)))
	{
		printf("Line: %s/n", line);
		free(line);
	}
	close(fd);
	return (0);
}
