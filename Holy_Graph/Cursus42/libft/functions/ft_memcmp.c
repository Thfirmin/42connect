/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 20:17:22 by thfirmin          #+#    #+#             */
/*   Updated: 2022/05/15 10:31:35 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//compare byte string

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while ((n-- > 1) && (*(char *) s1 == *(char *) s2))
	{
		if ((*(char *)s1 == '\0') || (*(char *)s2 == '\0'))
			break ;
		s1++;
		s2++;
	}
	return ((int)(*(char *)s1 - *(char *)s2));
}
