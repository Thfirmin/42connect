/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 03:35:50 by thfirmin          #+#    #+#             */
/*   Updated: 2022/05/11 03:04:47 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks for any printable character including space.
int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
