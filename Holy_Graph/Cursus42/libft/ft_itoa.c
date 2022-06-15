/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
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
=======
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:16:31 by thfirmin          #+#    #+#             */
/*   Updated: 2022/06/13 15:18:58 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_nbrlen(int n, int *len);

char	*ft_itoa(int n)
{
	int len;
	char *str;
	unsigned int	aux;

	len = 0;
	ft_nbrlen(n, &len);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	if (n < 0)
		aux = (n * -1);
	else
		aux = n;
	*(str + len) = '\0';
	while (len--)
	{
		*(str + len) = ((aux % 10) + '0');
		aux /= 10;
	}
	if (n < 0)
		*str = '-';
	return (str);
}

static void	ft_nbrlen(int n, int *len)
{
	unsigned int aux;
	
	if (n < 0)
	{
		*len += 1;
>>>>>>> 427025203765ace5e5ee4e2953df5d46fd37ea64
		aux = (n * - 1);
	}
	else
		aux = n;
	if (aux >= 10)
<<<<<<< HEAD
		return (ft_nbrlen((aux / 10), (len + 1)));
	else
		return (len + 1);
=======
	{
		*len += 1;
		ft_nbrlen((aux / 10), len);
	}
	if (aux < 10)
		*len += 1;
>>>>>>> 427025203765ace5e5ee4e2953df5d46fd37ea64
}
