/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 08:35:19 by thfirmin          #+#    #+#             */
/*   Updated: 2022/06/30 09:42:50 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	if (str)
	{
		while (*(str + len))
			len ++;
	}
	return(len);
}

size_t	ft_detectline(char *str)
{
	size_t	len;

	len = 0;
	if (!str)
		return (0);
	while (str[len] != '\n' && str[len] != '\0')
		len ++;
	if (str[len] == '\n')
		return (len);
	return (0);
}

void	ft_cleanbuffer(char *buffer)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (buffer[i] != '\n' && buffer[i] != '\0')
		i ++;
	while (buffer[i] != '\0')
		buffer[j++] = buffer[i++];
	buffer[j] = '\0';
}

char	*ft_append(char *str, char *buffer, size_t limit)
{
	char	*newstr;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(str);
	if (ft_detectline(buffer) > 0)
		len += (ft_detectline(buffer) + 2);
	else
		len += limit;
	newstr = malloc(len + 1);
	if (str)
		while (str[i])
		{
			newstr[i] = str[i];
			i ++;
		}
	if (buffer)
		while (*buffer)
			newstr[i++] = *buffer++;
	newstr[i] = '\0';
	if (str)
		free(str);
	str = NULL;
	return (newstr);
}


