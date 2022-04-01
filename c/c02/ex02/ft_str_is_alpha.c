/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 01:14:45 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/01 03:35:18 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
		}
		else if (*str >= 'A' && *str <= 'Z')
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
	printf("\"\": %d\n", ft_str_is_alpha(""));
	printf("\"OlA\": %d\n", ft_str_is_alpha("OlA"));
	printf("\"OLA\": %d\n", ft_str_is_alpha("OLA"));
	printf("\"H3llo\": %d\n", ft_str_is_alpha("H3llo"));
	printf("\"Hello, World!\": %d\n", ft_str_is_alpha("Hello, World!"));
	return (0);
} */
