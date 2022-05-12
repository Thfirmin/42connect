/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 03:44:33 by thfirmin          #+#    #+#             */
/*   Updated: 2022/05/11 03:02:10 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks for an alphabetic character;
//in the standard "C" locale, it is equivalent to (isupper(c) || islower(c)).
int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	}
	else if (c >= 'A' && c <= 'Z')
	{
	}
	else
	{
		return (0);
	}
	return (1);
}
