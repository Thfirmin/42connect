#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

char	*get_next_line(int fd);
int		ft_strlen(char *str);
char	*ft_strconcate(char *str, char *buffer);
int 	ft_detectline(char *str);
char    *ft_cleanbuffer(char *str);
char    *ft_getline(char *str);

#endif
