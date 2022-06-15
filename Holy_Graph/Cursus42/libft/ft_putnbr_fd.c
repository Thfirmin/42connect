/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 05:50:39 by thfirmin          #+#    #+#             */
/*   Updated: 2022/06/15 06:06:30 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;
	char			c;

	if (n < 0)
	{
		write (fd, "-", 1);
		num = (n * -1);
	}
	else
		num = n;
	while (num > 10)
	{
		c = ((num % 10) + '0');
		write (fd, &c, 1);
		num = num / 10;
	}
	c = ((num % 10) + '0');
	write(fd, &c, 1);
}
