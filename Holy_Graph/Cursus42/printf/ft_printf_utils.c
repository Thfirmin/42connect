/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 06:47:22 by thfirmin          #+#    #+#             */
/*   Updated: 2022/07/01 14:44:21 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_binstrchr(char *str, int c)
{
	while (*str)
	{
		if (*str == (char) c)
			return (1);
		str++;
	}
	return (0);
}

size_t	ft_ftputchar(char c)
{
	size_t	len;

	len = write(1, &c, 1);
	return(len);
}
