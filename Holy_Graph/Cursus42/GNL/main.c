#include "get_next_line.h"

char	*get_next_line(int fd);

int	main(void)
{
	char	*str;
	int		fd;

	fd = open("teste.txt", O_RDONLY);
	str = get_next_line(fd);
	close(fd);
	printf("Resultado: \"%s\"\n", str);
}
