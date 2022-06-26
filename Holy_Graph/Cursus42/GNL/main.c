#include "get_next_line.h"

char	*get_next_line(int fd);

int	main(void)
{
	char	*str;
	int		fd;

	fd = open("teste.txt", O_RDONLY);
	str = get_next_line(fd);
	printf("Resultado: %s\n", str);
	str = get_next_line(fd);
	printf("Resultado: %s\n", str);
	close(fd);
}
