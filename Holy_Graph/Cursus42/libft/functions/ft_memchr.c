/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 09:29:04 by thfirmin          #+#    #+#             */
/*   Updated: 2022/05/11 04:49:46 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	int	count;

	count = 0;
	while (n --)
	{
		if (*(char *) s + count == (char) c)
			return (s + count);
		count ++;
	}
	return ('\0');
}
