/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 01:33:29 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/01 03:36:04 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
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
	printf("\"\": %d\n", ft_str_is_numeric(""));
	printf("\"OlA\": %d\n", ft_str_is_numeric("OlA"));
	printf("\"0133\": %d\n", ft_str_is_numeric("0133"));
	printf("\"H3llo\": %d\n", ft_str_is_numeric("H3llo"));
	printf("\"Hello, World!\": %d\n", ft_str_is_numeric("Hello, World!"));
	return (0);
} */
