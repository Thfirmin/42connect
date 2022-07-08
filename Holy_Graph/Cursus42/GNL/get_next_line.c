/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 08:27:58 by thfirmin          #+#    #+#             */
/*   Updated: 2022/06/30 21:30:36 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	buffer[(BUFFER_SIZE + 1)];
	char	*str;
	size_t	b_size;

	str = (void *)0;
	b_size = read(fd, buffer, BUFFER_SIZE);
	str = buffer;
	return(str);
}
