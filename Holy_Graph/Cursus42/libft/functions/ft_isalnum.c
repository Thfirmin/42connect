/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 03:43:31 by thfirmin          #+#    #+#             */
/*   Updated: 2022/05/11 03:03:40 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks for an alphanumeric character;
//it is equivalent to (isalpha(c) || isdigit(c))
int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
	{
	}
	else if (c >= 'a' && c <= 'z')
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
