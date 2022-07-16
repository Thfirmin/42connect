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
	char	*files[] = {"files/41_no_nl", "files/41_with_nl", "files/42_no_nl", "files/42_with_nl", "files/43_no_nl", "files/43_with_nl", "files/alternate_line_nl_no_nl", "files/alternate_line_nl_with_nl", "files/big_line_no_nl", "files/big_line_with_nl", "files/multiple_line_no_nl", "files/multiple_line_with_nl", "files/multiple_nlx5", "files/empty", "files/nl"};

	fd = open(files[0], O_RDONLY);
	do
	{
		str = get_next_line(fd);
		printf("%s", str);
		if (str)
			free(str);
	}
	while (str);
	close (fd);
}

/*int main(void)
{
    char    *str;
    int     fd[15];
    char    *files[] = {"files/41_no_nl", "files/41_with_nl", "files/42_no_nl", "files/42_with_nl", "files/43_no_nl", "files/43_with_nl", "files/alternate_line_nl_no_nl", "files/alternate_line_nl_with_nl", "files/big_line_no_nl", "files/big_line_with_nl", "files/multiple_

    for (int i = 0; i < 15 ; i++)
    {
        fd[i] = open(files[i], O_RDONLY);
    }
    for (int i = 0 ; i < 15 ; i++)
    {
        printf("%s\n_____________________________________________________________________\n", files[i]);
        do
        {
            str = get_next_line(fd[i]);
            printf("%s", str);
            if (str)
                free(str);
        }
        while (str);
        printf("\n_____________________________________________________________________\n");
        close (fd[i]);
    }
}*/
