/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 23:49:21 by thfirmin          #+#    #+#             */
/*   Updated: 2022/06/26 00:57:09 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*str;
	char		buffer[BUFFER_SIZE];
	size_t		limit;
	size_t		comp;

	comp = 0;
	str = ft_cleanbuffer(str);
	while (!ft_detectline(str))
	{
		limit = read(fd, buffer, BUFFER_SIZE);
		if (limit <= 0 && comp <= 0)
			return (0);
		else if (limit < BUFFER_SIZE)
		{
			str = ft_strconcate(str, buffer);
			break;
		}
		comp = limit;
		str = ft_strconcate(str, buffer);
	}
	return(ft_getline(str));
}
