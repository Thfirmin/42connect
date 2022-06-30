#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

char	*get_next_line(int fd);
size_t	ft_detectline(char *str);
void	ft_cleanbuffer(char *buffer);
char	*ft_append(char *str, char *buffer, size_t limit);
size_t	ft_strlen(char *str);

#endif
