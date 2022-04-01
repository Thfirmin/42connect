/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 01:45:13 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/01 03:38:38 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
		{
		}
		else
		{
			return (0);
		}
		str ++;
	}
	return (1);
}

/* #include <stdio.h>

int	main(void)
{
	printf("\"\": %d\n", ft_str_is_printable(""));
	printf("\"Ola\": %d\n", ft_str_is_printable("ola"));
	printf("\"OLA\": %d\n", ft_str_is_printable("\n"));
	printf("\"\": %d\n", ft_str_is_printable("\t"));
	printf("\"hello, world!\": %d\n", ft_str_is_printable("hello, world!"));
	return (0);
} */
