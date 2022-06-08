/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 18:25:32 by thfirmin          #+#    #+#             */
/*   Updated: 2022/06/08 11:17:22 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	count;

	count = 0;
	str = malloc((sizeof(*s) * len) + 1);
	if (!str)
		return (0);
	if (start >= ft_strlen(s))
		start = ft_strlen(s);
	while (len -- || *(s + start) != '\0')
	{
		*str = *(s + start);
		str ++;
		s ++;
		count ++;
	}
	*str = '\0';
	return (str - count);
}
