/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 20:15:37 by thfirmin          #+#    #+#             */
/*   Updated: 2022/05/15 10:24:58 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//locate byte in byte string

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n --)
	{
		if (*(char *) s == (char) c)
			return ((void *) s);
		s++;
	}
	return ((void *) '\0');
}
