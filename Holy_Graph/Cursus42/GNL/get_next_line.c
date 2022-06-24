/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 23:49:21 by thfirmin          #+#    #+#             */
/*   Updated: 2022/06/24 17:18:02 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*str;
	char		buffer[BUFFER_SIZE];
	int			limit;

	str = ((void *) 0);
	limit = BUFFER_SIZE;
	while (ft_detectline(str))
	{
		limit = read(fd, buffer, BUFFER_SIZE);
		str = ft_strconcate(buffer, str);
		if (ft_getline(str))
	}
	str = ft_cleanbuffer(str);


	return(buffer);
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



