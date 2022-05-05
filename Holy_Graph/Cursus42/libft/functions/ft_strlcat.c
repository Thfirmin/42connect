/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 04:30:58 by thfirmin          #+#    #+#             */
/*   Updated: 2022/05/05 08:00:42 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	aux;
	
	count = 0;
	aux = 0;
	while (dst[count] != '\0')
	{
		count ++;
	}
	while ((count < (size - 1)) && src[aux] != '\0')
	{
		dst[count] = src[aux];
		count ++;
		aux ++;
	}
	dst[count] = '\0';
	return (count);
}