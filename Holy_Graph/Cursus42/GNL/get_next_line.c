/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 08:27:58 by thfirmin          #+#    #+#             */
/*   Updated: 2022/06/30 09:36:11 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	size_t	limit;
	char	buffer[(BUFFER_SIZE + 1)];
	char	*str;

	str = (void *)0;
	while (!ft_detectline(str))
	{
		ft_cleanbuffer(buffer);	
		if (*buffer == '\0')
		{
			limit = read(fd, buffer, BUFFER_SIZE);
			buffer[BUFFER_SIZE] = '\0';
		}
		str = ft_append(str, buffer, limit);
		if ((limit <= 0) && (*str == '\0'))
			return (0);
		else if (limit < BUFFER_SIZE)
			break;
	}
	return(str);
}
