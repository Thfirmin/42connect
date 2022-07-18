/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_copy.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 23:44:58 by thfirmin          #+#    #+#             */
/*   Updated: 2022/07/17 19:17:07 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_copy.h"

char	*get_next_line(int fd)
{
	static char	*cache;
	char		*line;
	ssize_t		flag;

	line = (void *)0;
	flag = 0;
	if (BUFFER_SIZE < 1 || fd < 0 || fd > MAX_FD)
		return (0);
	cache = ft_strdup("");
	line 
}
