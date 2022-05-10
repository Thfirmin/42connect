/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 09:28:05 by thfirmin          #+#    #+#             */
/*   Updated: 2022/05/07 21:51:40 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char	*big, const char *little, unsigned int len)
{
	unsigned int	inbig;
	unsigned int	inlit;

	inbig = 0;
	if (*little == '\0')
	{
		return ((char *) big);
	}
	while ((inbig < len) && (big[inbig] != '\0'))
	{
		inlit = 0;
		while (big[inbig] == little[inlit])
		{
			inlit ++;
			inbig ++;
			if (little[inlit] == '\0')
				return ((char *) big + (inbig - inlit));
		}
		if (big[inbig] != '\0')
			inbig ++;
	}
	return ('\0');
}
