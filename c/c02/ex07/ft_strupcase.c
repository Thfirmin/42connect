/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 01:56:00 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/01 03:39:19 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '0')
	{
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			str[count] = (str[count] - 32);
		}
		count ++;
	}
	return (str);
}

/* #include <stdio.h>

int	main(void)
{
	char	c[] = "jesus... Amado!!!";
	printf ("%s\n", ft_strupcase(c));
	printf ("%s\n", c);
	return (0);
} */
