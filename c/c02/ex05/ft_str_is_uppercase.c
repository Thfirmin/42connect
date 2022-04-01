/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 01:42:01 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/01 03:37:54 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
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
	printf("\"\": %d\n", ft_str_is_uppercase(""));
	printf("\"Ola\": %d\n", ft_str_is_uppercase("ola"));
	printf("\"OLA\": %d\n", ft_str_is_uppercase("OLA"));
	printf("\"H3llo\": %d\n", ft_str_is_uppercase("H3llo"));
	printf("\"hello, world!\": %d\n", ft_str_is_uppercase("hello, world!"));
	return (0);
} */
