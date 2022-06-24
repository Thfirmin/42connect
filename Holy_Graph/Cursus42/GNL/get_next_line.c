/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 23:49:21 by thfirmin          #+#    #+#             */
/*   Updated: 2022/06/24 17:26:41 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*str;
	char		buffer[BUFFER_SIZE];
	int			limit;

	str = ((void *) 0);
	while (ft_detectline(str))
	{
		limit = read(fd, buffer, BUFFER_SIZE);
		if (limit)
			str = ft_strconcate(buffer, str);
		if (ft_getline(str))
	}
	str = ft_cleanbuffer(str);
	

	return(buffer);
}
