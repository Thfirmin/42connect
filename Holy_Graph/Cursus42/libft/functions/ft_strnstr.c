/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 20:36:45 by thfirmin          #+#    #+#             */
/*   Updated: 2022/05/12 20:41:31 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*haystack, const char *needle, size_t len)
{
	unsigned int	instack;
	unsigned int	inneedle;

	instack = 0;
	if (*needle == '\0')
	{
		return ((char *) haystack);
	}
	while ((instack < len) && (haystack[instack] != '\0'))
	{
		inneedle = 0;
		while (haystack[instack] == needle[inneedle])
		{
			inneedle ++;
			instack ++;
			if (needle[inneedle] == '\0')
				return ((char *) haystack + (instack - inneedle));
		}
		if (haystack[instack] != '\0')
			instack ++;
	}
	return ('\0');
}
