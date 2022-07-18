/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_copy.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 23:45:45 by thfirmin          #+#    #+#             */
/*   Updated: 2022/07/17 16:01:06 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_copy.h"

int ft_strlen(char *s)
{
	int i;

	i = 0;
	if (s == (void *)0)
		return (0);
	while(s[i])
		i++;
	return (i);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (((char *)dst) == ((char *)src) && n > 0)
		return (0);
	else
	{
		while (i < n)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i ++;
		}
		return (dst);
	}
}

char	*ft_strdup(char *s)
{
	size_t	l;
	char	*t;

	l = ft_strlen(s);
	t = malloc(sizeof(char) * (l + 1));
	if (t == (void *)0)
		return(0);
	ft_memcpy(t, s, l);
	t[l] = '\0';
	return (t);
}
