#include "get_next_line.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char    *str;
    int     id[] = {0, 1, 0, 2, 1, 2, 3, 0, 5, 8};
	int		fd[15];
    char    *files[] = {"files/41_no_nl", "files/41_with_nl", "files/42_no_nl", "files/42_with_nl", "files/43_no_nl", "files/43_with_nl", "files/alternate_line_nl_no_nl", "files/alternate_line_nl_with_nl", "files/big_line_no_nl", "files/big_line_with_nl", "files/multiple_line_no_ln", "files/multiple_line_with_nl", "files/multiple_nlx5", "files/nl", "files/empty"};

    for (int i = 0; i < 15 ; i++)
    {
        fd[i] = open(files[i], O_RDONLY);
    }
	for (int j = 0; j < 10; j ++)
	{
    	str = get_next_line(fd[id[j]]);
    	printf("%s", str);
    	if (str)
    		free(str);
	}
    for (int i = 0; i < 15 ; i++)
	{
    	close (fd[i]);
	}
}
