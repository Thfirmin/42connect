/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 23:58:21 by thfirmin          #+#    #+#             */
/*   Updated: 2022/07/01 14:55:45 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *ptstr, ...)
{
	size_t	i;
	size_t	len;
	va_list plcvalue;

	i = 0;
	len = 0;
	if (!ptstr)
		return (0);
	va_start(plcvalue, ptstr);
	while (ptstr[i])
	{
		if (ptstr[i] == '%' && ft_binstrchr("cspdiuxX%", ptstr[i + 1]))
		{
			len += holderfinder(ptstr[i + 1], plcvalue);
			i += 2;
		}
		else
		{
			if (ptstr[i] == '%')
				i++;
			len += ft_ftputchar(ptstr[i++]);
		}
	}
	va_end(plcvalue);
	return (len);
}

size_t	holderfinder(const char plcholder, va_list plcvalue)
{
	size_t	len;

	len = 0;
	if (plcholder == '%')
		len += ft_ftputchar('%');
	else if (plcholder == 'c')
		len += ft_ftputchar(va_arg(plcvalue, int));
	else if (plcholder == 's')
		len += ft_ftputstr(va_arg(plcvalue, char *));
	else if (plcholder == 'd' || plcholder == 'i')
		len += ft_ftputnbr(va_arg(plcvalue, int));
	else if (plcholder == 'u')
		len += ft_ftputunbr(va_arg(plcvalue, unsigned int));
	else if (plcholder == 'p')
		len += ft_ftputptr(va_arg(plcvalue, void *));
	else if (plcholder == 'x' || plcholder == 'X')
		len += ft_ftputhex(va_arg(plcvalue, int), plcholder);
	return (len);
}


