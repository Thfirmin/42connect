/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 20:34:03 by thfirmin          #+#    #+#             */
/*   Updated: 2022/05/13 04:46:12 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	t_size;

	t_size = ft_strlen(src);
	while (dstsize > 1 && *src != '\0')
	{
		*dst++ = *src++;
		dstsize --;
	}
	if (dstsize == 1)
		*dst = '\0';
	return (t_size);
}
