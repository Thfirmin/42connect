#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
	}
	return (count);
}

char	*ft_srtconcate(char *buffer, char *str)
{
	char	*newstr;
	size_t	len;
	int		index;

	index = 0;
	len = (ft_strlen(buffer) + ft_strlen(str));
	newstr = malloc (len + 1);
	if (!newstr)
		return (0);
	while (*(str + index))
		*newstr++ = *(str + index++);
	while (*buffer)
		*newstr++ = *buffer++;
	*newstr = '\0';
	if	(str)
		free(str);
	return (newstr - len);
}

int	ft_detectline(char *str)
{
	s
}

char	*ft_cleanbuffer(char *str)
{
	s
}

char	*ft_getline(char *str)
{
	s
}
