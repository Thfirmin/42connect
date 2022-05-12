/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 03:45:24 by thfirmin          #+#    #+#             */
/*   Updated: 2022/05/11 03:04:15 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks whether c is a 7-bit unsigned char value
//that fits into the ASCII character set.
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
