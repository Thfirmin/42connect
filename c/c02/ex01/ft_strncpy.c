/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 01:01:47 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/01 03:34:31 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while ((count < n) && (src[count] != '\0'))
	{
		dest[count] = src [count];
		count ++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count ++;
	}
	return (dest);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[20];
	char	src[] = "Ola, Mund\xA0o";

	printf ("Original:	%s\n", strncpy(dest, src, 100));
	printf ("42:		%s\n", ft_strncpy(dest, src, 100));
	return (0);
} */
