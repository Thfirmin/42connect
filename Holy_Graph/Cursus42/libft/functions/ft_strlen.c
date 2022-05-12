/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 03:39:57 by thfirmin          #+#    #+#             */
/*   Updated: 2022/05/11 03:05:35 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//calculate the length of a string
unsigned int	ft_strlen(const char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count ++;
	}
	return (count);
}
