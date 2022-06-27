/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:21:23 by thfirmin          #+#    #+#             */
/*   Updated: 2022/06/27 01:23:13 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*str;
	char		buffer[BUFFER_SIZE];
	size_t		limit;
	
	str = ft_cleanbuffer(str);
	while (!ft_detectline(str))
	{
		limit = read(fd, buffer, BUFFER_SIZE);
		str = ft_strconcate(str, str, buffer);
		if (limit <= 0 && (*str != '\0' || *str != '\n'))
			return (0);
		else if (limit < BUFFER_SIZE)
			break;
	}
	return(ft_getline(str));
}
