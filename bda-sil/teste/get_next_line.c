/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 10:28:23 by thfirmin          #+#    #+#             */
/*   Updated: 2022/07/21 10:34:09 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char *cache;
	char		*temp;
	char		*line;
	ssize_t		flag;

	temp = (void *)0;
	line = (void *)0;
	flag = 1;
	if ((BUFFER_SIZE < 1) || (read(fd, 0, 0) < 0))
		return (0);
	if (!cache)
		cache = ft_strdup("");
}
