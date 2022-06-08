/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 20:36:45 by thfirmin          #+#    #+#             */
/*   Updated: 2022/06/08 10:35:14 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//locate a substring in a n lenght string

/*char	*ft_strnstr(const char	*haystack, const char *needle, size_t len)
{
	 8  check(ft_strnstr(haystack, "aaabc", 5) == haystack); showLeaks();
	 10  check(ft_strnstr(haystack, "abcd", 9) == haystack + 5); showLeaks();
	 12 mbueno-g  check(ft_strnstr(haystack, "a", 1) == haystack); showLeaks();

	unsigned int	instack;
	unsigned int	inneedle;

	instack = 0;
	if (*needle == '\0')
		return ((char *) haystack);
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
		if (haystack[instack] != '\0' && haystack[instack] != needle[inneedle])
			instack ++;
	}
	return (0);
}*/


char	*ft_strnstr(const char	*haystack, const char *needle, size_t len)
{
	size_t	index;

	index = 0;
	if (*needle == '\0')
		return ((char *) haystack);
	if (len < ft_strlen(needle))
		return (0);
	while ((index <= len) && *haystack != '\0')
	{
		if (*(needle + index) == '\0')
			return ((char *)haystack);
		else if (*(haystack + index) == *(needle + index))
			index ++;
		else if (*(haystack + index) != *( needle + index))
		{
			index = 0;
			haystack ++;
			len --;
		}
	}
	return (0);
}
