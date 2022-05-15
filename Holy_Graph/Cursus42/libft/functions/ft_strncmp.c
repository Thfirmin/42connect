/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 20:36:03 by thfirmin          #+#    #+#             */
/*   Updated: 2022/05/15 10:35:01 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//compare strings of n lenght

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	count;

	count = 0;
	while (count < (n - 1))
	{
		if (s1[count] == '\0' || s2[count] == '\0')
			break ;
		else if (s1[count] != s2[count])
			break ;
		count ++;
	}
	return (s1[count] - s2[count]);
}
