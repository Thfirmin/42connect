/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 20:17:22 by thfirmin          #+#    #+#             */
/*   Updated: 2022/05/13 06:16:10 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n -- && *(char *) s1 == *(char *) s2 )
	{
		s1++;
		s2++;
	}
	if (*(char *) s1 == *(char *) s2)
		return (0);
	else
		return ((int)s1 - (int)s2);;
}

