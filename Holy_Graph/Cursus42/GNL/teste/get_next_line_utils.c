/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:19:42 by thfirmin          #+#    #+#             */
/*   Updated: 2022/06/27 01:21:43 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t		ft_strlen(char *str)
{
	size_t	len;

	if (!str)
		return (0);
	len = 0;
	while (*(str + len))
		len ++;
	return (len);
}

char	*ft_strconcate(char *alloc, char *s1, char *s2)
{
	char	*newstr;
	int		i;

	i = 0;
	newstr = malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (s1)
		while (*s1)
			newstr[i++] = *s1++;
	if (s2)
		while (*s2)
			newstr[i++] = *s2++;
	newstr[i] = '\0';
	if (alloc)
		free(alloc);
	return (newstr);
}

int	ft_detectline(char *str)
{
	size_t len;

	len = 0;
	if (!str)
		return (0);
	while (str[len] != '\n' && str[len] != '\0')
		len++;
	if (str[len] == '\n')
		return (1);
	else
		return (0);
}

char	*ft_cleanbuffer(char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	str = ft_strconcate(str, (str + ++i), "\0");
	return (str);
}

char	*ft_getline(char *str)
{
	size_t	len;
	size_t	i;
	char	*line;

	len = 0;
	i = 0;
	while(str[len] != '\n' && str[len] != '\0')
		len++;
	line = malloc(len + 2);
	while (i < len)
	{
		line[i] = str[i];
		i++;
	}
	line[i++] = '\n';
	line[i] = '\0';
	return(line);
}
