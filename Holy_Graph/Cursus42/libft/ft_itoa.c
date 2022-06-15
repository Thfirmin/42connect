/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 23:12:22 by thfirmin          #+#    #+#             */
/*   Updated: 2022/06/11 09:20:49 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lift.h"

static int	ft_nbrlen(int n, int len);

char	*ft_itoa(int n)
{
	char	*str;
	int	len;

	len = ft_nbrlen(n, 0);
	str = malloc(sizeof(char) + (len + 1));
	if (str < 0)
		*str++ = '-';
}

static int	ft_nbrlen(int n, int len)
{
	unsigned int	aux;

	if (n < 0)
	{
		len ++;
		aux = (n * - 1);
	}
	else
		aux = n;
	if (aux >= 10)
		return (ft_nbrlen((aux / 10), (len + 1)));
	else
		return (len + 1);
}
