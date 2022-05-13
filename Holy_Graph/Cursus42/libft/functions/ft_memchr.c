/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 20:15:37 by thfirmin          #+#    #+#             */
/*   Updated: 2022/05/13 05:18:59 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	//int	count;

	//count = 0;
	while (n --)
	{
		if (*(char *) s == (char) c)
			return ((void *) s);
		s++;
	}
	return ((void *) '\0');
}

