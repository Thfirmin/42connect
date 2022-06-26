/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 01:16:46 by thfirmin          #+#    #+#             */
/*   Updated: 2022/06/26 02:45:44 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	if (!str)
		return (0);
	while (*(str + count))
		count++;
	return (count);
}

char	*ft_strconcate(char *str, char *buffer)
{
	char	*newstr;
	size_t	len;
	int		index;

	index = 0;
	len = (ft_strlen(str) + ft_strlen(buffer));
	newstr = malloc (len + 1);
	if (str)
		while (*(str + index))
			*newstr++ = *(str + index++);
	if (buffer)
		while (*buffer)
			*newstr++ = *buffer++;
	*newstr = '\0';
	return (newstr - len);
}

int	ft_detectline(char *str)
{
	if (!str)
		return (0);
	while (*str)
	{
		if (*str == '\n')
			return (1);
		else if (*str == '\0')
			return (0);
		str ++;
	}
	return (0);
}

char	*ft_cleanbuffer(char *str)
{
	char	*newstr;
	size_t	index;

	if (!str)
		return (0);
	index = 0;
	while (*(str + index) != '\n' && *(str + index) != '\0')
		index++;
	if (*(str + index) != '\0')
		index ++;
	newstr = ft_strconcate((str + index), "");
	free (str);
	return (newstr);
}

char	*ft_getline(char *str)
{
	char	*retstr;
	size_t	len;
	size_t index;

	index = 0;
	len = 0;
	while (str[len] != '\n' && str[len] != '\0')
	{
		len++;
	}
	retstr = malloc(len + 1);
	while (index < len)
	{
		retstr[index] = *str++;
		index ++;
	}
	retstr[index] = '\0';
	return (retstr);
}
