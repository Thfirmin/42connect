/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 00:25:46 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/01 03:33:17 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count ++;
	}
	dest[count] = '\0';
	return (dest);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[20];
	char	src[] = "Ola, Mund\xA0o";

	printf ("Original:	%s\n", strcpy(dest, src));
	printf ("42:		%s\n", ft_strcpy(dest, src));
	return (0);
} */
