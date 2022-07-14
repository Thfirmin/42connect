/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 23:49:21 by thfirmin          #+#    #+#             */
/*   Updated: 2022/07/14 06:01:36 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*line;

	if (!line)
		line = ft_calloc(1, 1);
	if (read(fd, 0, 0) || BUFFER_SIZE <= 0)
		return (0);
	line = capture_line(fd, line);
	return (line);
}

char	*capture_line(int fd, char *str)
{
	char	*buffer;
	ssize_t	bytes;

	buffer = ft_calloc(sizeof(char), (BUFFER_SIZE + 1));
	if (!buffer)
	{
		free (str);
		return (0);
	}
	while (!ft_strchr(str, '\n'))
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		buffer[bytes] = '\0';
		str = ft_strjoin(str, buffer);
		if (!str || bytes <= 0)
			break;
	}
	free(buffer);
	return (str);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	len;
	size_t	i;
	char	*newstr;

	newstr = (void *)0;
	i = 0;
	len = (ft_strlen(s1) + ft_strlen(s2));
	if (len >= 1)
		newstr = ft_calloc((len + 1), sizeof(char));
	if (!newstr)
	{
		free (s1);
		return (0);
	}
	while (*(s1 + i))
	{
		newstr[i] = s1[i];
		i ++;
	}
	if (s2)
		while (*s2)
			newstr[i++] = *s2++;
	newstr[i] = '\0';
	free(s1);
	return (newstr);
}
