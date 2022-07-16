/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 01:28:52 by thfirmin          #+#    #+#             */
/*   Updated: 2022/07/16 04:59:48 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

void	*ft_calloc(int count, int size)
{
	char	*ptr;
	size_t	len;

	len = 0;
	ptr = malloc (count * size);
	if (!ptr)
		return (0);
	while (len < (unsigned int)(count * size))
		*(ptr + len++) = 0;
	return ((void *) ptr);
}

char	*ft_strchr(char *str, int c)
{
	if (!str)
		return (0);
	while (*str)
	{
		if (*str == (unsigned char) c)
			return (str);
		str ++;
	}
	return (0);
}

size_t	ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	if (str)
		while (*(str + len))
			len ++;
	return (len);
}

f_list	*backup_line(int fd, f_list *list)
{
	if (!list)
		list = addnew_list(fd);
	while (list -> newfile)
	{
		if (list -> f_fd == fd)
			return (list);
		list = list -> newfile;
	}
	list -> newfile = addnew_list(fd);
	return (list);
}

f_list	*addnew_list(int fd)
{
	f_list	*new ;

	new = (f_list *) malloc (sizeof(f_list));
	if (!new)
		return (0);
	new -> f_fd = fd;
	new -> f_str = (void *) 0;
	new -> newfile = 0;
	return (new);
}
