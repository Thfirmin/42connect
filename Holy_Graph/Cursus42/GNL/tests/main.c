#include "get_next_line.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

char	*get_next_line(int fd);

int	main(void)
{
	char	*str;
	int		fd;

	fd = open("teste.txt", O_RDONLY);
	do
	{
		str = get_next_line(fd);
		printf("Resultado: \"%s\"\n", str);
		if (str)
			free(str);
	}
	while (str);
	close (fd);
}
