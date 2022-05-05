/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 09:22:35 by thfirmin          #+#    #+#             */
/*   Updated: 2022/05/05 09:25:11 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size)
{
	unsigned int	count;

	count = 0;
	while (count < (size - 1) && src[count] != '\0')
	{
		dst[count] = src[count];
		count ++;
	}
	dst[count] = '\0';
	return (count);
}
