#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int		fd;
	char	*str;

	fd = open("teste.txt", O_RDONLY);
	do
	{
		str = get_next_line(fd);
		printf("%s", str);
		//if (str)
		//	free(str);
	}while (str);
	close(fd);
}
