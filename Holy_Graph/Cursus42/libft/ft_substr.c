/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 18:25:32 by thfirmin          #+#    #+#             */
/*   Updated: 2022/06/08 08:17:39 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t		count;

	count = 0;
	str = malloc(len * sizeof(char));
	if (!str)
		return (0);
	while ((count < len) && (s[(start + count)] != '\0'))
	{
		if (count == (len - 1))
		{
			break;
		}
		str[count] = s[(start + count)];
		count ++;
	}
	str[count] = '\0';
	return (str);
}
