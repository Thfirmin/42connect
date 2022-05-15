/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 20:22:24 by thfirmin          #+#    #+#             */
/*   Updated: 2022/05/15 10:02:18 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//write a byte to n byte string

void	*ft_memset(void *b, int c, size_t len)
{
	while (len--)
	{
		*(unsigned char *) b++ = (unsigned char) c;
	}
	return (b);
}
