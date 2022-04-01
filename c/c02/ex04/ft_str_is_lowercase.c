/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 01:38:20 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/01 03:37:12 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
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
	printf("\"\": %d\n", ft_str_is_lowercase(""));
	printf("\"Ola\": %d\n", ft_str_is_lowercase("ola"));
	printf("\"OLA\": %d\n", ft_str_is_lowercase("OLA"));
	printf("\"H3llo\": %d\n", ft_str_is_lowercase("H3llo"));
	printf("\"hello, world!\": %d\n", ft_str_is_lowercase("hello, world!"));
	return (0);
} */
