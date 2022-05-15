/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 20:21:05 by thfirmin          #+#    #+#             */
/*   Updated: 2022/05/15 10:32:58 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//move byte string

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*buffer;

	buffer = dst;
	if (dst < src)
	{
		while (len --)
			*(char *)dst++ = *(char *)src++;
	}
	else
	{
		dst = dst + len;
		src = src + len;
		while (dst --)
			*(char *)dst-- = *(char *)src--;
	}
	return (buffer);
}
