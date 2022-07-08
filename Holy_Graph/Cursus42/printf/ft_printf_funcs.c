/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_funcs.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 07:24:04 by thfirmin          #+#    #+#             */
/*   Updated: 2022/07/01 14:44:21 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_ftputstr(char *str)
{
	size_t	len;

	len = 0;
	while (*str)
		len += ft_ftputchar(*str++);
	return (len);
}

size_t	ft_ftputnbr(int nb)
{
	size_t			len;
	unsigned int	nbr;

	len = 0;
	if (nb < 0)
	{
		len += ft_ftputchar('-');
		nbr = (nb * -1);
	}
	else
		nbr = nb;
	if (nbr >= 10)
		len += ft_ftputnbr(nbr / 10);
	len += ft_ftputchar((nbr % 10) + '0');
	return (len);
}

size_t	ft_ftputunbr(unsigned int nb)
{
	size_t	len;

	len = 0;
	if (nb >= 10)
		len += ft_ftputnbr(nb / 10);
	len += ft_ftputchar((nb % 10) + '0');
	return (len);
}

size_t	ft_ftputptr(void *ptr)
{
	unsigned long int	len;
	unsigned long int	nb;

	len = 0;
	nb = (unsigned long int) ptr;
	if (nb < 16)
		len += ft_ftputstr("0x");
	if (nb >= 16)
		len += ft_ftputptr((void *) (nb / 16));
	if (nb % 16 >= 10)
		len += ft_ftputchar(((nb % 16) - 10) + 'a');
	else
		len += ft_ftputchar((nb % 16) + '0');
	return (len);
}

size_t	ft_ftputhex(int nb, char plcholder)
{
	size_t			len;
	unsigned int	nbr;
	int				capital;

	len = 0;
	capital = 0;
	if (plcholder == 'x')
		capital = 32;
	if (nb < 0)
	{
		len += ft_ftputchar('-');
		nbr = (nb * -1);
	}
	else
		nbr = nb;
	if (nbr >= 16)
		len += ft_ftputhex((nbr / 16), plcholder);
	if (nbr % 16 >= 10)
		len = len + ft_ftputchar(((nbr % 16) - 10) + ('A' + capital));
	else
		len += ft_ftputchar((nbr % 16) + '0');
	return (len);
}
