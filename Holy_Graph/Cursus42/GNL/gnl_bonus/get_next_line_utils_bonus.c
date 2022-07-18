/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 01:28:52 by thfirmin          #+#    #+#             */
/*   Updated: 2022/07/18 01:23:31 by thfirmin         ###   ########.fr       */
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
	while (list)
	{
		if (list -> f_fd == fd)
			return (list);
		list = list -> newfile;
	}
	return (0);
}

f_list	*addnew_list(int fd, f_list *list)
{
	f_list	*new ;

	new = (f_list *) malloc (sizeof(f_list));
	if (!new)
		return (0);
	new -> f_fd = fd;
	new -> f_str = ft_calloc(1, 1);
	new -> newfile = 0;
	if (!list)
		list = new;
	else
	{
		while (list -> newfile)
			list = list -> newfile;
		list -> newfile = new;
	}
	return (new);
}
